1class Solution {
2public:
3    string addBinary(string a, string b) {
4     string ans;
5    int carry = 0;
6    int i = a.length() - 1;
7    int j = b.length() - 1;
8
9    while (i >= 0 || j >= 0 || carry) {
10      if (i >= 0)
11        carry += a[i--] - '0';
12      if (j >= 0)
13        carry += b[j--] - '0';
14      ans += carry % 2 + '0';
15      carry /= 2;
16    }
17
18    reverse(begin(ans), end(ans));
19    return ans;   
20    }
21};