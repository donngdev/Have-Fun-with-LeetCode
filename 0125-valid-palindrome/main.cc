#include <iostream>
#include <string>


using namespace std;

class Solution {
public:
    // Linear Scan
    // Time complexity: O(n)
    // Space complexity: O(1)  // new_str ??? 
    bool isPalindrome(string s)
    {
      s = adjust(s); // adjust string, remove irrelevant character.

      if (s.size() <= 1)
        return true;

      int i = 0, j = s.size() - 1;
      while (i < j)
      {
        if (s[i] != s[j])
          return false;
        i++;
        j--;
      }
      return true;
    }

  // adjust string, remove irrelevant character.
  // Tips: "12345 %^abcd&*( XYZ " ----adjust----> "12345abcdxyz"
  string adjust(string s)
  {
    string new_str;
    for (int i = 0; i < s.size(); ++i)
    {
      if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'))
        new_str.insert(new_str.end(), s[i]);
      else if (s[i] >= 'A' && s[i] <= 'Z')
        new_str.insert(new_str.end(), s[i] + 32); // 'A' -> 'a' 
    }
    return new_str;
  }
};

int main()
{
  string s = "race a car";
  if (Solution().isPalindrome(s))
    cout << "true" << endl;
  else
    cout << "false" << endl;

  return 0;
}