#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  int longestPalindrome(string s)
  {
    if (s.size() == 0)
      return 0;

    map<char, int> hash;
    for(char c: s) 
      hash[c]++;

    int counter = 0;
    for (auto it = hash.begin(); it != hash.end(); it++)
        counter += (it->second % 2 == 0) ? it->second : (it->second-1);
    
    // Add a central character.
    if (counter < s.size())
      counter += 1;

    return counter;
  }
};


int main()
{

  string s = "abccccdd";
  cout << Solution().longestPalindrome(s) << endl;
  return 0;
}
