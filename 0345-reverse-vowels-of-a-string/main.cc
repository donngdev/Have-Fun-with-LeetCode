#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  string reverseVowels(string s)
  {
    unordered_set<char> record = {'a', 'e', 'i', 'o', 'u',
                                  'A', 'E', 'I', 'O', 'U'};
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
      while (i < s.size() && record.find(s[i]) == record.end())
        i++;
      while (j >= 0 && record.find(s[j]) == record.end())
        j--;
      if (i >= j)
        break;
      
      swap(s[i++], s[j--]);
    }
    return s;
  }
};

int main()
{
  string s = "hello";
  cout << Solution().reverseVowels(s) << endl;
  return 0;
}
