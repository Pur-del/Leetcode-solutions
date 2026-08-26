1class Solution {
2public:
3    string reverseVowels(string s) {
4      string word=s;
5      int start=0;
6      int end=s.length()-1;
7        string vowels="aeiouAEIOU";
8       while(start<end){
9       while(start<end && vowels.find(word[start])==string::npos){
10        start++;
11       } 
12       while(start<end && vowels.find(word[end])==string::npos){
13        end--;
14       }
15
16       swap(word[start],word[end]);
17
18       start++;
19       end--;
20       }
21      return word;
22    }
23};