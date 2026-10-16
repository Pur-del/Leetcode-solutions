#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
    int longestPalindrome(std::string s) {
        std::vector<int> count(128, 0);
        for (char c : s) {
            count[c]++;
        }
        
        int length = 0;
        bool hasOdd = false;
        
        for (int cnt : count) {
            if (cnt % 2 == 0) {
                length += cnt;
            } else {
                length += cnt - 1;
                hasOdd = true;
            }
        }
        
        if (hasOdd) {
            length += 1;
        }
        
        return length;
    }
};