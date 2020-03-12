// https://leetcode-cn.com/problems/string-compression/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  int compress(vector<char>& chars)
  {
    if (chars.size() <= 1)
      return chars.size();
    
    int start = 0;
    int index = 0;
    int i = start + 1;
    while (i <= chars.size())
    {
      if (i == chars.size() || chars[i] != chars[start])
      {
        int len = i - start;
        chars[index++] = chars[start];
        if (len != 1)
        {
          string len_str = to_string(len);
          for(char c : len_str)
            chars[index++] = c;
        }
        start = i;
        i = start + 1;
      }
      else 
        i++;
    }
    while (chars.size() > index)
      chars.pop_back();
    return index;
  }
};

int main()
{
  vector<char> chars = {'a','a','b','b','c','c','c'};
  cout << Solution().compress(chars) << endl;
  for (char e : chars)
      cout << e;
  cout << endl;
  return 0;
}
