class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(n)
    bool uniqueOccurrences(vector<int>& arr)
    {
      unordered_map<int, int> freq;
      for (int i = 0; i < arr.size(); ++i)
        freq[arr[i]]++;

      unordered_set<int> record;
      for(const pair<int, int>& p: freq)
      {
        if (record.find(p.second) != record.end())
          return false;
        else
          record.insert(p.second);
      }
      return true;
    }
};