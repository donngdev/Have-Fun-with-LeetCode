#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Linear scan
    // Time complexity: O(n)
    // Space complexity: O(1)
    bool isOneBitCharacter(vector<int>& bits)
    {
      int i = 0;
      while (i < bits.size())
      {
        if (bits[i] == 0)
        {
          if (i == bits.size() - 1)
            return true;
          else
            i++;
        }
        else
          i += 2;
      }
      return false;
    }
};

int main()
{
  vector<int> bits = {1, 0, 0};
  cout << Solution().isOneBitCharacter(bits) << endl;
  return 0;
}
