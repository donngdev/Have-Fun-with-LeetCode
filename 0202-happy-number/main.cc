#include <iostream>

using namespace std;

class Solution {
public:
  // https://leetcode-cn.com/problems/happy-number/solution/shi-yong-kuai-man-zhi-zhen-si-xiang-zhao-chu-xun-h/
  // Time complexity: ???
  // Space complexity: O(1)
  bool isHappy(int n)
  {
    int slow = n, fast = n;
    do
    {
      slow = bitSquareSum(slow);
      fast = bitSquareSum(fast);
      fast = bitSquareSum(fast);
    } while (slow != fast);

    return slow == 1;
  }
 private:
  int bitSquareSum(int n)
  {
    int sum = 0;
    while (n)
    {
      int bit = n % 10;
      sum += bit * bit;
      n /= 10;
    }
    return sum;
  }
};

int main()
{
  cout << Solution().isHappy(19) << endl;
  return 0;
}

