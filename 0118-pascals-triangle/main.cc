#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n^2)
  // Space complexity: O(n(n+1)/2)
  vector<vector<int>> generate(int numRows)
  {
    vector<vector<int>> triangle;
    if (numRows <= 0)
      return triangle;
    triangle.push_back({1}); // first row
    for (int i = 1; i < numRows; ++i)
    {
      vector<int> row;
      row.push_back(1);  // every row first element is 1
      for (int j = 1; j < i; ++j)
        row.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
      row.push_back(1);  // every row last element is 1

      triangle.push_back(row);
    }

    return triangle;
  }
};

void print_vector(vector<vector<int>> vec)
{
  for (int i = 0; i < vec.size(); i++)
  {
    for (int j = 0; j < vec[i].size(); j++)
      cout << vec[i][j] << " ";
    cout << endl;
  }
}

int main()
{
  print_vector(Solution().generate(5));
  return 0;
}