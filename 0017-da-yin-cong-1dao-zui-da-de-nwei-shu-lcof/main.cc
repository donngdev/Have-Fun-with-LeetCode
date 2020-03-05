class Solution {
public:
    // Time comlexity: O(10^n)
    // Space complexity: O(10^n)
    vector<int> printNumbers(int n)
    {
      n = pow(10, n);
      vector<int> nums;
      for (int i = 1; i < n; ++i)
        nums.push_back(i);
      
      return nums;
    }
};