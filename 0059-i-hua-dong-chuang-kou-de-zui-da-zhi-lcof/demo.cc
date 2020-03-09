#include <map>
#include <iostream>

using namespace std;



int main()
{
  multimap<int, int> record;
  for (int i = 0; i < 20; i++)
    record.insert(pair<int, int>(666, i));

  cout << "size = " << record.size() << endl;
  
  while (!record.empty())
  {
    cout <<  record.find(666)->second << " ";
    record.erase(record.find(666));
  }
  return 0;
}
