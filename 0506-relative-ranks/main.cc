#include <iostream>
#include <vector>
#include <string>
#include <map>  // tree map

using namespace std;


class Solution {
public:
  // Time complexity: O(nlogn) // tree set
  // Space complexity: O(2n)  // for a map<int, int> and res<string>
  vector<string> findRelativeRanks(vector<int>& nums)
  {
    if (nums.size() < 3)
      return particular(nums);

    vector<string> res(nums.size());  // allocate memory
    map<int, int> record;
    for (int i = 0; i < nums.size(); ++i)
      record.insert(pair<int, int>(nums[i], i));

    // Top three
    auto it = record.rbegin();  // get max1 key
    res[it->second] = "Gold Medal";
    record.erase(record.rbegin()->first); // remove max1

    it = record.rbegin();  // get max2 key
    res[it->second] = "Silver Medal";
    record.erase(record.rbegin()->first); // remove max2

    it = record.rbegin();  // get max3 key
    res[it->second] = "Bronze Medal";
    record.erase(record.rbegin()->first); // remove max3
    
    int k = 4;
    while (record.rbegin() != record.rend())
    {
      it = record.rbegin();
      res[it->second] = to_string(k++);
      record.erase(it->first);
    }
    return res;
  }
 private:
  // case: nums.size < 3;
  vector<string> particular(vector<int>& nums)
  {
    vector<string> res;
    if (nums.size() == 0)
      return res;
    else if (nums.size() == 1)
    {
      res.push_back("Gold Medal");
      return res;
    }
    else // nums == 2
    {
      if (nums[0] > nums[1])
      {
        res.push_back("Gold Medal");
        res.push_back("Silver Medal");
      }
      else
      {
        res.push_back("Silver Medal");
        res.push_back("Gold Medal");
      }
      return res; 
    }
  }
};

void print_vec(vector<string>& ranks)
{
  for (string e : ranks)
    cout << e << " ";
  cout << endl;
}

int main()
{

  vector<int> nums = {2, 1, 3, 5, 4, 7};
  vector<string> ranks = Solution().findRelativeRanks(nums);
  print_vec(ranks);
  return 0;
}



