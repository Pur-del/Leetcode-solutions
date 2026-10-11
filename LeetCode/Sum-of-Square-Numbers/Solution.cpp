1class Solution {
2public:
3    bool judgeSquareSum(int c) {
4       
5        long long low=0;
6        long long high=sqrt(c);
7        int ans=0;
8
9        while (low <= high) {
10            long long sum = low*low +high*high;
11
12            if (sum == c) {
13                return true;
14            }
15            else if (sum  < c) {
16            low++;
17            }
18            else{
19                high--;
20            }
21        }
22        
23        return false;
24    }
25};