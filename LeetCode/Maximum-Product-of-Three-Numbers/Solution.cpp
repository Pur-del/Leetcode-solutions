1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        int n=nums.size();
5         ranges::sort(nums);
6
7       int option1=nums.back()* nums[n-2] *nums[n-3];
8       int option2=nums.back()*nums.front()*nums[1];
9
10       if(option1>option2){
11        return option1;
12       }
13       else{
14        return option2;
15       }
16    }
17};