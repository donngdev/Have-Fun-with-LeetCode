#include <iostream>
#include <cassert>

using namespace std;

class Solution {
public:
  // Iteration
  // Time complexity: O(n)
  // Space complexity: O(1)
  int fib(int N)
  {
    if (N <= 1)
      return N;
    int f1 = 0, f2 = 1;
    int fn = f1 + f2;
    for (int i = 2; i <= N; ++i)
    {
      fn = f1 + f2;
      f1 = f2;
      f2 = fn;
    }

    return fn;
  }
};

int main()
{
  int N = 4;
  cout << Solution().fib(N) << endl;

  return 0;
}