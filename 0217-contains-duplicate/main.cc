#include <iostream>
#include <unordered_set> // for deduplication

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(n)
  bool containsDuplicate(vector<int>& nums)
  {
    unordered_set<int> record;
    for (int e : nums)
    {
      if (record.find(e) != record.end())
        return true;
      else
        record.insert(e);
    }
    return false;
  }
};