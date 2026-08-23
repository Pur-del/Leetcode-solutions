1class Solution {
2public:
3    int maxCount(int m, int n, vector<vector<int>>& ops) {
4      for(int i=0;i<ops.size();i++){
5        m=min(m,ops[i][0]);
6        n=min(n,ops[i][1]);
7      } 
8      return m*n; 
9    }
10};