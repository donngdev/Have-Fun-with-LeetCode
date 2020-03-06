#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(nlogn)
  // Space complexity: O(1)
  vector<int> getLeastNumbers(vector<int>& arr, int k)
  {
    if (arr.size() < k)
      return arr;
    for (int i = (arr.size() - 2) / 2; i >= 0; --i)
      shift_down(arr, i, arr.size());
    
    vector<int> res;

    for (int i = arr.size() - 1; i >= 0 && i >= arr.size() - k; --i)
    {
      swap(arr[0], arr[i]);
      res.push_back(arr[i]);
      shift_down(arr, 0, i);
    }

    return res;
  }
 
 private:
  // Time complexity: O(logn)
  // Space complexity: O(1)
  void shift_down(vector<int>& arr, int k, int n)
  {
    while (2 * k + 1 < n)
    {
      int j = 2 * k + 1;
      if (j + 1 < n && arr[j] > arr[j + 1])
        j++;
      
      if (arr[k] > arr[j])
        swap(arr[k], arr[j]);
      
      k = j;
    }
  }
};


int main()
{
  vector<int> nums = {3,2,1};
  int k = 2;
  nums = Solution().getLeastNumbers(nums, k);
  return 0;
}
