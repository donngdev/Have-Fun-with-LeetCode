#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:

  int countSegments(string s)
  {

    unordered_set<char> dead_char = {',', ' ', '.', '!'};
    int i = next(s, 0);
    int counter = 0;
    while (i != -1)
    {
      while (dead_char.find(s[i]) == dead_char.end())
        i++;
      counter++;
      i = next(s, i);
    }
    return counter;
  }
  
  int next(string s, int index)
  {
    for (int i = index; i < s.size(); i++)
    {
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') )
        return i;
    }
    return -1;
  }
};


int main()
{

  string s = "Hello, my name is John";
  cout << Solution().countSegments(s);
  return 0;
}
