#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  int repeatedStringMatch(string A, string B)
  {
    if (B.size() == 0)
      return 0;

    int index = get_next(A, 0, B[0]); 
    int i = index, j = 0;
    int count = 1;
    while (j < B.size() && index != -1)
    {
      if (A[i] == B[j])
      {
        if (i + 1 == A.size() && j != B.size() - 1)
          count++;

        i = (i + 1) % A.size();
        j++;
      }
      else
      {
        index = get_next(A, index+1, B[0]);
        i = index;
        count = 1;
        j = 0;
      }
    }

    return j == B.size() ? count : -1;
  }

private:
 int get_next(string A, int index, char c)
 {
    for (int i = index; i < A.size(); ++i)
    {
      if (A[i] == c)
        return i;
    }

    return -1;
 }
};

int main()
{
  string A = "aabaa", B = "aaab";
  cout << Solution().repeatedStringMatch(A, B) << endl;
  return 0;
}
