#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
  // Time complexity: O(nlogn) + O(n)
  // Space complexity: O(n)
  string longestWord(vector<string>& words)
  {
    unordered_set<string> record(words.begin(), words.end());
    
    sort(words.begin(), words.end(), cmp); // O(nlogn)

    string res = "";
    for (int i = 0; i < words.size(); ++i)
    {
      string curr = words[i];
      curr.pop_back();
      while (curr.size() > 0)
      {
        if (record.find(curr) != record.end())
          curr.pop_back();
        else
          break;
      }
      if (curr.size() == 0)
        res = words[i].size() > res.size() ? words[i] : res;
    }
    return res;
  }

 private:
    static bool cmp(const string &sa, const string& sb)
    {
      if(sa.size() != sb.size())
        return sa.size() > sb.size();
      return sa < sb;
    }
};

int main()
{
  vector<string> words = {"a", "banana", "app", "appl", "ap", "apply", "apple"};
  cout << Solution().longestWord(words) << endl;
  return 0;
}

