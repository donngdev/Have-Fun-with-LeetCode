#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(n)
  string removeOuterParentheses(string S)
  {
    string s;
    stack<char> st;
    for (int i = 0; i < S.size(); ++i)
    {
      if (S[i] == ')')
        st.pop();
      if (!st.empty())
        s += S[i];
      if (S[i] == '(')
        st.push(S[i]);
    }

    return s;
  }
};

int main()
{
  string s = "(()())(())";
  cout << Solution().removeOuterParentheses(s) << endl;
  return 0;
}
