#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(n)
  vector<int> constructArr(vector<int>& a)
  {
    // assert(a.size() > 0);
    vector<int> L(a.size(), 1);
    vector<int> R(a.size(), 1);
    for (int i = 1; i < a.size(); ++i)
      L[i] = L[i - 1] * a[i - 1];

    for (int i = a.size() - 2; i >= 0; --i)
      R[i] = R[i + 1] * a[i + 1];

    for (int i = 0; i < a.size(); ++i)
      L[i] *= R[i];
    
    return L[i];
  }
};

int main()
{

  return 0;
}
