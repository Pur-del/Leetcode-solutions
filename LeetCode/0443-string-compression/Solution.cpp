class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0; // Index to write the compressed characters
        int read = 0;  // Index to read through the array
        
        while (read < chars.size()) {
            char currChar = chars[read];
            int count = 0;
            
            // Count occurrences of the current consecutive character
            while (read < chars.size() && chars[read] == currChar) {
                read++;
                count++;
            }
            
            // Write the character
            chars[write++] = currChar;
            
            // If the count is greater than 1, convert it to characters and write each digit
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }
        
        return write; // Returns the new length of the compressed array
    }
};