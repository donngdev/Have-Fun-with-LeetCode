#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<vector<int>> res = {{1, 2, 3}, {4, 5, 6}};

  cout << res.size() << "X" << res[0].size() << endl;

  return 0;
}