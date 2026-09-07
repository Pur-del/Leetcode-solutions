1class Solution {
2public:
3    bool checkRecord(string s) {
4        int absCount = 0;
5        int consecutiveLate = 0;
6
7        for (char c : s) {
8            if (c == 'A') {
9                absCount++;
10                if (absCount >= 2) return false;
11                consecutiveLate = 0; // Reset consecutive late streak
12            } 
13            else if (c == 'L') {
14                consecutiveLate++;
15                if (consecutiveLate >= 3) return false;
16            } 
17            else { // 'P'
18                consecutiveLate = 0; // Reset consecutive late streak
19            }
20        }
21
22        return true;
23    }
24};