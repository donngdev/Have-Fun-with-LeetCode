// https://leetcode-cn.com/problems/jewels-and-stones/
#include <string>
#include <unordered_set>
#include <iostream>

using namespace std;

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(n)
    int numJewelsInStones(string J, string S)
    {
      unordered_set<char> jewels(J.begin(), J.end());
      int count = 0;
      for (char e : S)
      {
        if (jewels.find(e) != jewels.end())
          count++;
      }
      return count;
    }
};