// https://leetcode-cn.com/problems/bu-yong-jia-jian-cheng-chu-zuo-jia-fa-lcof/

class Solution {
public:
  // Time complexity: O(1)
  // Space complexity: O(1)
  int add(int a, int b)
  {
    return b==0 ? a : add(a^b, (unsigned int)(a&b) << 1);
  }
};