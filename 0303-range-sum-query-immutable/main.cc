class NumArray {
public:
    // Brute Force
    NumArray(vector<int>& nums)
    {
      for (int e : nums)
        datas.push_back(e);
    }
    
    int sumRange(int i, int j)
    {
      int k = i;
      int res = 0;
      while (k <= j)
        res += datas[k++];
      
      return res;
    }
 private:
  vector<int> datas;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */