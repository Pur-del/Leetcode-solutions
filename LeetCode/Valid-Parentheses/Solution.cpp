1#include <stack>
2#include <string>
3using namespace std;
4
5class Solution {
6public:
7    bool isValid(string s) {
8        stack<char> st;
9
10        for(char ch : s) {
11
12            if(ch == '(' || ch == '{' || ch == '[') {
13                st.push(ch);
14            }
15            else {
16
17                if(st.empty())
18                    return false;
19
20                char top = st.top();
21                st.pop();
22
23                if(ch == ')' && top != '(')
24                    return false;
25
26                if(ch == '}' && top != '{')
27                    return false;
28
29                if(ch == ']' && top != '[')
30                    return false;
31            }
32        }
33
34        return st.empty();
35    }
36};