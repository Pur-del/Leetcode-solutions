class Solution {
public:
    string minWindow(string s, string t) {
        if (s.length() < t.length()) {
            return "";
        }

        // Count how many of each character we need from t
        unordered_map<char, int> tMap;
        for (char c : t) {
            tMap[c]++;
        }

        int required = tMap.size(); // Total unique characters to match
        int formed = 0;             // Unique characters matched so far in our window

        unordered_map<char, int> windowCounts;

        int left = 0, right = 0;
        int minLen = INT_MAX;
        int startIdx = 0; // Where our best minimum window starts

        // Expand the window with the right pointer
        while (right < s.length()) {
            char c = s[right];
            windowCounts[c]++;

            // If this character's count matches what's needed, count it as formed
            if (tMap.count(c) && windowCounts[c] == tMap[c]) {
                formed++;
            }

            // Once we have all required characters, try to shrink from the left
            while (left <= right && formed == required) {
                // Update our minimum window if this one is smaller
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIdx = left;
                }

                // Remove the left character from our window
                char leftChar = s[left];
                windowCounts[leftChar]--;
                
                // If we dropped below the required count, decrease formed
                if (tMap.count(leftChar) && windowCounts[leftChar] < tMap[leftChar]) {
                    formed--;
                }

                left++; // Shrink the window
            }

            right++; // Expand the window
        }

        // If minLen was never updated, no valid window was found
        return minLen == INT_MAX ? "" : s.substr(startIdx, minLen);
    }
};