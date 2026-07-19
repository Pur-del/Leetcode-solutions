1class Solution {
2public:
3    int arrayPairSum(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int sum=0;
6        for(int i=0;i<nums.size();i=i+2)
7        sum=sum+nums[i];
8            return sum;
9    }
10   
11};