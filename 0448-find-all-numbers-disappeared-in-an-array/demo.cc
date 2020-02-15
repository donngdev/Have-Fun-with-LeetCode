#include <iostream>

using namespace std;

int main()
{
  int* a = new int[3];
  cout << a[0] << " " << a[1] << " " << a[2] << endl;

  delete [] a;
  a = nullptr;
  return 0;
}