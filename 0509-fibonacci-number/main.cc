#include <iostream>
#include <cassert>

using namespace std;

class Solution {
public:
    // Recursion
    // Time complexity: O(2^n)
    // Space complexity: O(n) // recurssion stack
    int fib(int N)
    {
      assert(N >= 0);
      if (N <= 1)    
        return N;
      return fib(N - 1) + fib(N - 2);
    }
};

int main()
{
  int N = 4;
  cout << Solution().fib(N) << endl;

  return 0;
}