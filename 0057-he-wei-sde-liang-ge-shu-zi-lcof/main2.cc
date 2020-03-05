class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    vector<int> twoSum(vector<int>& nums, int target)
    {
      unordered_set<int> record;
      for (int e : nums)
      {
        if (record.find(target - e) != record.end())
          return {e, target - e};
        else
          record.insert(e);
      }
      throw invalid_argument("this input has no sulotion.");
    }
};