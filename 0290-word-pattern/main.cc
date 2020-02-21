#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: (n)
    bool wordPattern(string pattern, string str)
    {
      map<string, int> record;
      vector<string> v = to_vector(str);
      int k = 0;
      for (int i = 0; i < v.size(); ++i)
      {
        if (record.find(v[i]) == record.end())
        {
          record.insert(pair<string, int>(v[i], i));
        }
      }

      if (pattern.size() != v.size())
        return false;
      
      for (int i = 0; i < pattern.size(); ++i)
      {
        int a = pattern.find(pattern[i]);
        int b = record.find(v[i])->second;
        if (a != b)
          return false;
      }
      return true;
    }

 private:
  vector<string> to_vector(string str)
  {
    str.insert(str.end(), ' '); // add space
    string s;
    vector<string> v;
    for (int i = 0; i < str.size(); ++i)
    {
      if (str[i] == ' ')
      {
        if (s.size() > 0)
        {
          v.push_back(s);
          s = "";  // clear
        }
      }
      else
        s.insert(s.end(), str[i]);
    }
    return v;
  }

};

int main()
{
  string pattern = "abba", str = "dog cat cat fish";
  cout << Solution().wordPattern(pattern, str) << endl;
  return 0;
}