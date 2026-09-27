1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4      int n=nums.size();
5       vector<int>ans(n);
6     
7
8       int prefix=1;
9       for(int i=0;i<n;i++){
10        ans[i]=prefix;
11        prefix*=nums[i];
12       } 
13
14       int suffix=1;
15       for(int i=n-1;i>=0;i--){
16        ans[i]*=suffix;
17        suffix*=nums[i];
18       }
19       return ans;
20    }
21};