1class Solution {
2public:
3    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
4        int n=timeSeries.size();
5        int count=0;
6        for(int i=0;i<n-1;i++){
7            int gap=timeSeries[i+1]-timeSeries[i];
8            count+= min(gap, duration);
9        }
10        count+= duration;
11        return count;
12    }
13};