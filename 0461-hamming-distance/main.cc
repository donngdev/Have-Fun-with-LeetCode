#include <iostream>

using namespace std;

class Solution
{
public:
  // Time complexity: O(n) // 0 <= n <= 32 
  // Space complexity: O(1)
  int hammingDistance(int x, int y)
  {
    int a = x ^ y;
    int count = 0;
    while (a)
    {
      a = a & (a-1);
      count++;
    }
    return count;
  }
};

int main()
{
  int a = 11, b = 10;
  cout << Solution().hammingDistance(a, b) << endl;
  return 0;
}
