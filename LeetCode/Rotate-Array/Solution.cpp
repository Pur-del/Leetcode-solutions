1#include<algorithm>
2class Solution {
3public:
4    void rotate(vector<int>& nums, int k) {
5           
6           k=k%nums.size();
7       
8            std::rotate(nums.begin(),nums.end()-k,nums.end());
9       
10    }
11};