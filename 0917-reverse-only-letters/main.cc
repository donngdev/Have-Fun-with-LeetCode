class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(1)
  string reverseOnlyLetters(string S)
  {
    int i = 0, j = S.size() - 1;
    while (i < j)
    {
      while (i < S.size() && !(S[i] >= 'a' && S[i] <= 'z') && !(S[i] >= 'A' && S[i] <= 'Z'))
        i++;
      while (j >= 0 && !(S[j] >= 'a' && S[j] <= 'z') && !(S[j] >= 'A' && S[j] <= 'Z'))
        j--;
      if (i >= j)
        break;
      swap(S[i++], S[j--]);
    }

    return S;
  }
};