1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int result=nums[0];
5        int total=0;
6        for(int i=0;i<nums.size();i++){
7            if(total<0){
8                total=0;
9            }
10            total+=nums[i];
11            result=max(result,total);
12        }
13        return result;
14    }
15};