// https://leetcode-cn.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(n)
    vector<int> replaceElements(vector<int>& arr)
    {
      vector<int> res(arr.size(), -1);
      for (int i = arr.size() - 2; i >= 0; --i)
      {
        res[i] = max(res[i+1], arr[i+1]);
      }
      
      return res;
    }
};