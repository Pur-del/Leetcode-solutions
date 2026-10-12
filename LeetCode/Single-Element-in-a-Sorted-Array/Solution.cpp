1#include<unordered_map>
2
3class Solution {
4public:
5    int singleNonDuplicate(vector<int>& nums) {
6       
7        unordered_map<int,int>mp;
8           
9        for(int i=0;i<nums.size();i++){
10             mp[nums[i]]++;
11
12        }
13        for(auto&pair:mp){
14            if(pair.second==1){
15                return pair.first;
16            }
17        }
18        return -1;
19    }
20};