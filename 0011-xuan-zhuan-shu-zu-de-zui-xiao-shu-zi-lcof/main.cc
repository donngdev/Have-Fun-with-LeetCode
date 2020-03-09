// https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/
class Solution {
public:
    // Binary Search
    // Time complexity: O(logn)
    // Space complexity: O(1)
    int minArray(vector<int>& numbers)
    {
      int l = 0, r = numbers.size() - 1;
      while (l <= r)
      {
        int mid = l + (r - l) / 2;
        if (numbers[mid] < numbers[r])
          r = mid;
        else if (numbers[mid] > numbers[r])
          l = mid+1;
        else
          r--;
      }
      return numbers[l];
    }
};