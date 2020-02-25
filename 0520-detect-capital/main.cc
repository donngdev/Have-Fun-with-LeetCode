#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  bool detectCapitalUse(string word)
  {
    if (word[0] >= 'A' && word[0] <'Z')
    {
      // The rest of the characters are in uppercase or lowercase
      word = word.substr(1);
      int a = 0, b = 0;
      counter(word, a, b);
      return a == 0 ? true : b == 0;
    }
    else
    {
      // must be all lower
      word = word.substr(1);
      int a = 0, b = 0;
      counter(word,a, b);
      return b == 0;
    }
  }
 private:
  void counter(string s, int &a, int &b)
  {
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] >= 'a' && s[i] <= 'z')
        a++;
      else if (s[i] >= 'A' && s[i] <= 'Z')
        b++;
    }
  }
};





int main()
{
  string s = "USA";
  cout << Solution().detectCapitalUse(s) << endl;
  return 0;
}
