1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4        int p1=num1.size()-1,p2=num2.size()-1;
5        string ans="";
6        int carry=0;
7        while(p1>=0 || p2>=0 || carry>0)
8        {
9            int sum=carry;
10            if(p1>=0)
11            {
12                sum+=num1[p1]-'0';
13                p1--;
14            }
15            if(p2>=0)
16            {
17                sum+=num2[p2]-'0';
18                p2--;
19            }
20            ans+=sum%10 +'0';
21            carry=sum/10;
22        }
23        reverse(ans.begin(),ans.end());
24        return ans;
25    }
26};