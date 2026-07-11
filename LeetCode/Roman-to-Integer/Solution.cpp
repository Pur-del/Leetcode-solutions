1class Solution {
2public:
3    
4      int romanToInt(string s) {
5        int res = 0;
6        unordered_map<char, int> roman = {
7            {'I', 1},
8            {'V', 5},
9            {'X', 10}, 
10            {'L', 50},
11            {'C', 100},
12            {'D', 500},
13            {'M', 1000}
14        };
15
16        for (int i = 0; i < s.size() - 1; i++) {
17            if (roman[s[i]] < roman[s[i + 1]]) {
18                res -= roman[s[i]];
19            } else {
20                res += roman[s[i]];
21            }
22        }
23
24        return res + roman[s[s.size() - 1]];    
25    }
26};