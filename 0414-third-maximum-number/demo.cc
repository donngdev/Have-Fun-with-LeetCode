#include <set>
#include <iostream>

using namespace std;

int main()
{
  set<int> record;
  record.insert(3);
  record.insert(5);
  record.insert(2);
  record.insert(9);
  record.insert(4);
  int val = *record.rbegin();
  cout << val << endl;
  cout << *record.begin() << endl;
  cout << "size: " << record.size() << endl;
  record.erase(record.begin());
  cout << *record.begin() << endl;
  cout << "size: " << record.size() << endl;
  return 0;
}
