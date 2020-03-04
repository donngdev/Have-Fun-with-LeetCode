#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
  // Binary Search 
  // Time complexity: O(logn)
  // Space complexity: O(1)
  char nextGreatestLetter(vector<char>& letters, char target)
  {
    assert(letters.size() > 0);
    if (target >= letters.back())
      return letters.front();
    
    int l = 0, r = letters.size() - 1;
    while (r - l > 1)
    {
      int mid = l + (r - l) / 2;
      if (letters[mid] == target)
        l = mid + 1;
      else if (letters[mid] > target)
        r = mid;
      else
        l = mid; 
    }
    return letters[l] > target ? letters[l] : letters[r];
  }
};

int main()
{
  vector<char> letters = {'c', 'f', 'j'};
  vector<char> letters2 = {'e', 'e', 'e', 'e', 'e', 'e', 'n', 'n', 'n', 'n'};
  char target1 = 'a';
  char target2 = 'c';
  char target3 = 'd';
  char target4 = 'g';
  char target5 = 'j';
  char target6 = 'k';
  char target7 = 'e';

  cout << Solution().nextGreatestLetter(letters, target1) << endl;
  cout << Solution().nextGreatestLetter(letters, target2) << endl;
  cout << Solution().nextGreatestLetter(letters, target3) << endl;
  cout << Solution().nextGreatestLetter(letters, target4) << endl;
  cout << Solution().nextGreatestLetter(letters, target5) << endl;
  cout << Solution().nextGreatestLetter(letters, target6) << endl;
  cout << Solution().nextGreatestLetter(letters2, target7) << endl;
  return 0;
}
