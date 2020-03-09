// https://leetcode-cn.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/

class Solution {
public:
    // Sorted
    // Time complexity: O(nlogn)
    // Space complexity: O(n)
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
      vector<int> sorted = nums;
      sort(sorted.begin(), sorted.end());
      vector<int> res;
      for (int i = 0; i < nums.size(); ++i)
      {
        res.push_back(index_of(sorted, nums[i]));
      }
      return res;
    }
 private:
  int index_of(vector<int>& nums, int val)
  {

    for (int i  = 0; i < nums.size(); ++i)
    {
      if (nums[i] == val)
        return i;
    }

    return -1;
  }
};