1#include<unordered_map>
2#include<vector>
3class Solution {
4public:
5    vector<int> majorityElement(vector<int>& nums) {
6        int n=nums.size();
7        unordered_map<int,int>mp;
8        vector<int>ans;
9        for(int num:nums){
10            mp[num]++;
11        }
12
13        for(auto&pair:mp){
14            if(pair.second>n/3){
15                ans.push_back(pair.first);
16            }
17        }
18        return ans;
19    }
20};