#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  vector<int> plusOne(vector<int>& digits) {

    digits[digits.size() - 1]++;
    for (int i = digits.size() - 1; i > 0; --i)
    {
      if (digits[i] == 10)
      {
        digits[i] = 0;
        digits[i-1]++;
      }
    }
    if (digits[0] == 10)
    {
      digits[0] = 0;
      digits.insert(digits.begin(), 1); // insert 1 at the head of vector
    }
    return digits;
  }
};

void print_vec(vector<int>& digits)
{
  for (int e : digits)
    cout << e << " ";
  cout << endl;
}

int main()
{
  vector<int> digit = {9,9,9};
  print_vec(digit);

  Solution().plusOne(digit);
  print_vec(digit);
  return 0;
}