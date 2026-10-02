1class Solution {
2public:
3    int minCut(string s) {
4         int n = s.size();
5
6        vector<vector<bool>> t(n, vector<bool>(n, false));
7
8        for(int i = 0; i < n; i++) {
9            t[i][i] = true;
10        }
11
12        for(int l = 2; l <= n; l++) {
13            for(int i = 0; i < n-l+1; i++) {
14                int j = i+l-1;
15
16                if(l == 2) 
17                    t[i][j] = (s[i] == s[j]);
18                else 
19                    t[i][j] = ((s[i] == s[j]) && t[i+1][j-1]);
20            }
21        }
22
23        vector<int> dp(n);
24        for(int i = 0; i < n; i++) {
25            if(t[0][i] == true) 
26                dp[i] = 0;
27            else {
28                dp[i] = INT_MAX;
29                for(int k = 0; k < i; k++) {
30                    if(t[k+1][i] == true && dp[k]+1 < dp[i]) 
31                        dp[i] = 1 + dp[k];
32                } 
33            }
34        }
35
36        return dp[n-1];
37    }
38};