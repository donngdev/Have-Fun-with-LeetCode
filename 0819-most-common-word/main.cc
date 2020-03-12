// https://leetcode-cn.com/problems/most-common-word/
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;


class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(n)
  string mostCommonWord(string paragraph, vector<string>& banned)
  {
    // Make all characters lowercase
    transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);

    unordered_set<string> banned_set;
    for (string e : banned)
      banned_set.insert(e);

    unordered_map<string, int> freq;

    int start = first_letter(paragraph, 0);
    int i = start + 1;
    while (i <= paragraph.size())
    {
      if(i == paragraph.size() || !islower(paragraph[i]))
      {
        string word = paragraph.substr(start, i - start);
        if(banned_set.find(word) == banned_set.end())
          freq[word] += 1;
        start = first_letter(paragraph, i + 1);
        i = start + 1;
      }
      else
        i++;
    }

    int max_freq = 0;
    string res = "";
    for (const pair<string, int>& p : freq)
    {
      if(p.second > max_freq)
      {
        res = p.first;
        max_freq = p.second;
      }
    }
    return res;
  }


private:
  int first_letter(const string& s, int start){
      for (int i = start ; i < s.size() ; ++i)
      {
        if(islower(s[i]))
          return i;
      }
      return s.size();
  }
};

int main()
{
  string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
  vector<string> banned = {"hit"};
  cout << Solution().mostCommonWord(paragraph, banned) << endl;
  return 0;
}
