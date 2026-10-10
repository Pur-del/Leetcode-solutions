1class Solution {
2private:
3    void merge(vector<int>& nums, int left, int mid, int right, vector<int>& temp) {
4        int i = left;       // Starting index for left subarray
5        int j = mid + 1;    // Starting index for right subarray
6        int k = left;       // Starting index to be sorted
7
8        // Merge both subarrays into temp
9        while (i <= mid && j <= right) {
10            if (nums[i] <= nums[j]) {
11                temp[k++] = nums[i++];
12            } else {
13                temp[k++] = nums[j++];
14            }
15        }
16
17        // Copy remaining elements of left subarray, if any
18        while (i <= mid) {
19            temp[k++] = nums[i++];
20        }
21
22        // Copy remaining elements of right subarray, if any
23        while (j <= right) {
24            temp[k++] = nums[j++];
25        }
26
27        // Copy back the sorted elements into original array
28        for (int idx = left; idx <= right; idx++) {
29            nums[idx] = temp[idx];
30        }
31    }
32
33    void mergeSort(vector<int>& nums, int left, int right, vector<int>& temp) {
34        if (left >= right) return;
35
36        int mid = left + (right - left) / 2;
37
38        // Recursively sort first and second halves
39        mergeSort(nums, left, mid, temp);
40        mergeSort(nums, mid + 1, right, temp);
41
42        // Merge the sorted halves
43        merge(nums, left, mid, right, temp);
44    }
45
46public:
47    vector<int> sortArray(vector<int>& nums) {
48        vector<int> temp(nums.size());
49        mergeSort(nums, 0, nums.size() - 1, temp);
50        return nums;
51    }
52};