#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space compexity: O(1)
  int maxProfit(vector<int>& prices) {
    if (prices.size() == 0)
      return 0;

    int lowest_price = prices[0];
    int max_profit = 0;
    for (int i = 1; i < prices.size(); ++i)
    {
      if (prices[i] < lowest_price)
        lowest_price = prices[i];   // update
      else if (prices[i] - lowest_price > max_profit)
        max_profit = prices[i] - lowest_price;
    }

    return max_profit;
  }
};




int main()
{
  vector<int> prices = {7,6,4,3,1};
  cout << Solution().maxProfit(prices) << endl;
  return 0;
}
