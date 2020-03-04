#include <iostream>
#include <set>

using namespace std;

int main()
{
  set<int> st;
  st.insert(3);
  st.insert(6);
  st.insert(1);
  st.insert(9);
  cout << *st.begin() << endl;
  return 0;
}

