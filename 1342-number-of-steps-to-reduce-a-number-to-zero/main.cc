// https://leetcode-cn.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution {
public:
    // Time complexity: O(1)
    // Space complexity: O(1)
    int numberOfSteps (int num)
    {
      if (num == 0)
        return 0;
      return num % 2 == 0 ? numberOfSteps(num / 2) + 1 : numberOfSteps(num - 1) + 1;
    }
};