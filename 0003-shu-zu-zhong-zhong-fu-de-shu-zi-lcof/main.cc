class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(n)
    int findRepeatNumber(vector<int>& nums)
    {
      unordered_set<int> record;
      for (int e : nums)
      {
        if (record.find(e) != record.end())
          return e;
        else
          record.insert(e);  
      }
      return -1;
    }
};