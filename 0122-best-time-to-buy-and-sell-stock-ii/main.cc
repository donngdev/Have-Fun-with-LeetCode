#include <iostream>
#include <vector>

using namespace short

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  int maxProfit(vector<int>& prices) {
    int res = 0;
    for (int i = 1;  i < prices.size(); ++i)
    {
      if (prices[i] > prices[i - 1])
        res += (prices[i] - prices[i - 1]);
    }
    return res;
  }
};

int main()
{
  return 0;
}