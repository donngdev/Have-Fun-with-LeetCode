#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Dynamic Programming
  // Time complexity: O(n)
  // Space complexity: O(n)
  int fib(int N)
  {
    if (N <= 1)
      return N;
    vector<int> dp(N+1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= N; ++i)
      dp[i] = dp[i-1] + dp[i-2];
    
    return dp[N];
  }
};

int main()
{
  for (int i = 0; i < 10; ++i)
    cout << Solution().fib(i) << endl;

  return 0;
}