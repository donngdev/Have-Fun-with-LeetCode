#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Memory Search
  // Time complexity: O(n)
  // Space complexity: O(n)
  int fib(int N)
  {  
    if (N <= 1)
      return N;
    vector<int> memo(N+1, -1); // memo[0...N] = -1;
    memo[0] = 0;
    memo[1] = 1;
    return memo_search(N, memo);
  }

 private:
  int memo_search(int N, vector<int>& memo)
  {
    if (memo[N] != -1)
      return memo[N];
   
    memo[N] = memo_search(N-1, memo) + memo_search(N-2, memo);
    return memo[N];
  }
};

int main()
{
  for (int i = 0; i < 10; ++i)
    cout << Solution().fib(i) << endl;

  return 0;
}