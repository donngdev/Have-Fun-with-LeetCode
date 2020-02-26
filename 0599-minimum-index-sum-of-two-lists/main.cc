#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
  // Time complexity: O(n)
  // Space complexity: O(n)
  vector<string> findRestaurant(vector<string>& list1, vector<string>& list2)
  {
    unordered_map<string, int> record;
    for (int i = 0; i < list1.size(); ++i)
      record[list1[i]] = i;
    
    vector<string> res;
    int min_index = 0;
    for (int i = 0; i < list2.size(); ++i)
    {
      if (record.find(list2[i]) != record.end())
      {
        if (res.size() == 0)
        {
          min_index = i + record[list2[i]];
          res.push_back(list2[i]);
        }
        else if (i + record[list2[i]] == min_index)
          res.push_back(list2[i]);
        else if (i + record[list2[i]] < min_index)
        {
          min_index = i + record[list2[i]];
          res.clear();
          res.push_back(list2[i]);
        }
      }
    }

    return res;
  }
};

int main()
{
  vector<string> list1 = {"Shogun", "Tapioca Express", "Burger King", "Piatti"};
  vector<string> list2 = {"Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun"};

  vector<string> res = Solution().findRestaurant(list1, list2);

  for (string e : res)
    cout << e << " ";
  cout << endl;  
  return 0;
}

