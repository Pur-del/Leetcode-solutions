1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        if(nums.size()==1) return 0;
5        int n=nums.size();
6        int ans;
7        for(int i=0;i<nums.size()-1;i++){
8            if(nums[i]>nums[i+1]){
9         ans=i;
10         break;
11            }
12        }
13        if(nums[n-1]>nums[n-2]){
14            ans=n-1;
15        }
16        
17         return ans;
18    }
19};