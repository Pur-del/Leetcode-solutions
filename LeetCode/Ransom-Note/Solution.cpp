1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4      int freq[26]={0}; 
5      if(magazine.length()<ransomNote.length()){ 
6      return false;
7      }
8      for(char c:magazine){
9        freq[c-'a']++;
10      }
11      for(char c:ransomNote){
12        freq[c-'a']--;
13        if(freq[c-'a']<0)
14        return false;
15      }
16      return true;
17    }
18    
19};