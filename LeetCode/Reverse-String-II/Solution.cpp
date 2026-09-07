1
2       class Solution {
3public:
4    string reverseStr(string s, int k) {
5        int n = s.length();
6        
7        // Loop jumps 2k characters ahead on every iteration
8        for (int i = 0; i < n; i += 2 * k) {
9            
10            int start = i;
11            
12            // end handles the case where fewer than k characters remain
13            int end = min(i + k, n); 
14            
15            // std::reverse swaps characters from 'start' up to (but not including) 'end'
16            reverse(s.begin() + start, s.begin() + end);
17        }
18        
19        return s;
20    }
21}; 