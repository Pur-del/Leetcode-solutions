1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        int count=0;
5        for(int i=0;i<flowerbed.size();i++){
6            if(flowerbed[i]==0){
7             bool leftempty= (i==0) ||(flowerbed[i-1]==0);
8             bool rightempty=(i==flowerbed.size()-1) ||(flowerbed[i+1]==0);
9
10if(leftempty &rightempty){
11    flowerbed[i]=1;
12     count++;
13     if(count>=n)
14     return true;
15}
16            }
17        }
18        return count>=n;
19    }
20};