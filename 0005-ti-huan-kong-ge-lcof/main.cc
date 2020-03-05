#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time compliexity: O(n)
  // Space complexity: O(n)
  string replaceSpace(string s)
  {
    string ss;
    for (int i = 0; i < s.size(); ++i)
    {
      if (s[i] == ' ')
        adjust(ss);
      else
        ss.push_back(s[i]);
    }
    return ss;
  }

private:
  void adjust(string& s)
  {
    s.push_back('%');
    s.push_back('2');
    s.push_back('0');
  }
};


int main()
{
  string s = "Hello, I am Lan";
  cout << Solution().replaceSpace(s) << endl;
  return 0;
}
