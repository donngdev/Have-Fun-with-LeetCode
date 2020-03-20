#include <iostream>

using namespace std;

class Solution {
public:
    // Time complexity: O(1)
    // Space complexity: O(1)
    int subtractProductAndSum(int n)
    {
      int mul = 1;
      int sum = 0;
      while (n)
      {
        mul *= (n % 10);
        sum += (n % 10);
        n /= 10;
      }
      return mul - sum;
    }
};

int main()
{

	return 0;
}