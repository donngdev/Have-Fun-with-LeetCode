#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  bool canPlaceFlowers(vector<int>& flowerbed, int n)
  {
    flowerbed.insert(flowerbed.begin(), 0);
    flowerbed.insert(flowerbed.end(), 0);

    int count = 0;
    for (int i = 1; i < flowerbed.size() - 1; ++i)
    {
      if (flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
      {
        count++;
        flowerbed[i] = 1;
      }
    }

    return count >= n;
  }
};


int main()
{
  vector<int> flower = {1,0,0,0,1};
  int n = 1;
  cout << Solution().canPlaceFlowers(flower, n) << endl;
  return 0;
}