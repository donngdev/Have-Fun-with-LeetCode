#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // KMP Algorithm
  // Time complexity: O(n) + O(m) ~ O(m + n) , O(m) is get next
  // Space complexity: O(m)
  int strStr(string haystack, string needle)
  {
    if (haystack.size() < needle.size())
      return -1;
    
    if (needle.size() == 0)
      return 0;

    int* next = new int[needle.size()];
    get_next(needle, next);  // get next
    int i = 0, j = 0;
    while (i < haystack.size() && j < needle.size())
    {
      if (haystack[i] == needle[j])
      {
        i++;
        j++;
      }
      else
      {
        if (j == 0)
          i++;
        else
          j = next[j - 1];
      }
    }
    delete[] next;
    if (j == needle.size())
      return i - needle.size();

    return -1;
  }
 private:
  void get_next(string needle, int next[])
  {
    next[0] = 0;
    int i = 1, j = 0;
    while (i < needle.size())
    {
      if (needle[i] == needle[j])
        next[i++] = ++j;
      else
      {
        if (j == 0)
          next[i++] = 0;
        else
          j = next[j - 1];
      }
    }
  }
};

int main()
{
  string haystack = "hello", needle = "ll";
  cout << Solution().strStr(haystack, needle) << endl;
  return 0;
}