1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> result;
5        int n = nums.size();
6        
7        // Step 1: Sort the array to easily handle duplicates and use two pointers
8        sort(nums.begin(), nums.end());
9        
10        for (int i = 0; i < n - 2; ++i) {
11            // Skip duplicate elements for the first position
12            if (i > 0 && nums[i] == nums[i - 1]) continue;
13            
14            int left = i + 1;
15            int right = n - 1;
16            
17            while (left < right) {
18                int sum = nums[i] + nums[left] + nums[right];
19                
20                if (sum == 0) {
21                    result.push_back({nums[i], nums[left], nums[right]});
22                    
23                    // Skip duplicates for the second and third positions
24                    while (left < right && nums[left] == nums[left + 1]) left++;
25                    while (left < right && nums[right] == nums[right - 1]) right--;
26                    
27                    left++;
28                    right--;
29                } else if (sum < 0) {
30                    left++; // We need a larger sum, move left pointer forward
31                } else {
32                    right--; // We need a smaller sum, move right pointer backward
33                }
34            }
35        }
36        
37        return result;
38    }
39};