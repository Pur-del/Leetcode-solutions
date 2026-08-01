1
2        class Solution {
3public:
4    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
5        vector<vector<int>> answer;
6        int total = r * c;
7        if (mat[0].size() * mat.size() != total)
8            return mat;
9        for (int i = 0; i < total; i++) {
10            if (i % c == 0)
11                answer.push_back(vector<int>(c, 0));
12            answer[i / c][i % c] = mat[i / mat[0].size()][i % mat[0].size()];
13        }
14        return answer;
15    }
16};
17    