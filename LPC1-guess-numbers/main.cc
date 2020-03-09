// https://leetcode-cn.com/problems/guess-numbers/

class Solution {
public:
    // What is this doing？
    int game(vector<int>& guess, vector<int>& answer)
    {
      int count = 0;
      for (int i = 0; i < 3; ++i)
      {
        if (guess[i] == answer[i])
          count++;
      }

      return count;
    }
};