#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
      if (rowIndex == 0)
        return {1};
      else // k >= 1
      {
        vector<int> pre = {1};
        vector<int> curr;
        for (int i = 1; i <= rowIndex; ++i)
        {
          curr.push_back(1);
          for (int j = 1; j < i; ++j)
            curr.push_back(pre[j-1] + pre[j]);
          curr.push_back(1);
          pre = curr;
          curr.clear();
        }
        return pre;
      }
    }
};

void print_vec(vector<int> nums)
{
  for (int e : nums)
    cout << e << " ";
  cout << endl;  
}

int main()
{
  print_vec(Solution().getRow(3));

  return 0;
}