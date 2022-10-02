int maxSubArray(vector<int> &nums)
{
  if (nums.size ==1)
  {
    return nums[0];
  }
  int sum = 0;
  int max_sum = INT_MIN;
  for(auto it: nums)
  {
    sum += it;
    max_sum = max(sum,max_sum);
    if (sum <0)
    {
      sum = 0;
    }
  }
  return max_sum;
}
