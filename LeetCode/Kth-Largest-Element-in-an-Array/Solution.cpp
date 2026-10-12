1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        int n=nums.size();
5        sort(nums.begin(),nums.end());
6        return nums[n-k];
7    }
8};