1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        int n=candyType.size();
5        int count=1;  //atleast one type exist
6        int i=1;       //atleast one element exist
7        sort(candyType.begin(),candyType.end());
8        while(i<candyType.size()){
9            if(candyType[i]!=candyType[i-1]){
10              count++; 
11            }
12              i++;
13        }
14            int ans=n/2;
15           
16        
17        if(count==ans){
18            return count;
19        }
20        else if(count<ans){
21             return count;
22        }
23        else {
24            return ans;
25       
26        }
27    }
28};