#include <iostream>
#include <unordered_set>

using namespace std;


int main()
{
  unordered_set<int> record;
  record.insert(1);
  record.insert(2);
  record.insert(3);
  if (record.find(3) != record.end())
    cout << "4 exit." << endl;
  else
    cout << "4 does not exit." << endl;
  return 0;
}
