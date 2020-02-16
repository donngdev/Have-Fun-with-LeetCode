#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(n)
  vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c)
  {
    vector<vector<int>> res;
    if (nums.size() == 0)
      return res;

    int nums_r = nums.size(), nums_c = nums[0].size();
    if (nums_r * nums_c != r * c)
      return nums;

    // reshape
    int k = 0;
    for (int i = 0; i < r; i++)
    {
      vector<int> row;
      for (int j = 0; j < c; j++)
        row.push_back(get(k++, nums, nums_c));

      res.push_back(row);
    }

    return res;
  }
 private:
  int get(int k, vector<vector<int>>& nums, int c)
  {
    int i = k / c;
    int j = k % c;
    return nums[i][j];
  }
};

int main()
{

}