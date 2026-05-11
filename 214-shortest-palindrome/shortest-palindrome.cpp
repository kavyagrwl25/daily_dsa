

class Solution {
public:
    // Function to find the shortest palindrome by adding characters to the start of the string
    string shortestPalindrome(string s) {
        // Create a reversed version of the input string
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        
        // Combine the original string, a separator ('#'), and the reversed string
        // The separator ensures no false matches between the two parts
        string combined = s + "#" + rev_s;
        
        // Compute the Longest Prefix which is also Suffix (LPS) array for the combined string
        vector<int> lps = computeLpsArray(combined);
        
        // The last value in the LPS array gives the length of the longest palindromic prefix
        int longest_palindromic_prefix_len = lps.back();
        
        // Append the non-palindromic part of the reversed string to the front of the original string
        return rev_s.substr(0, s.length() - longest_palindromic_prefix_len) + s;
    }
    
    // Helper function to compute the LPS array using the Knuth-Morris-Pratt (KMP) algorithm
    vector<int> computeLpsArray(string needle) {
        int m = needle.size(); // Length of the string
        vector<int> lps(m, 0); // Initialize LPS array with zeros
        int j = 0; // Tracks the length of the current matching prefix and suffix
        
        // Iterate through the string to compute LPS values
        for (int i = 1; i < m; i++) {
            // If the characters do not match, move back in the LPS array
            while (j > 0 && needle[i] != needle[j]) {
                j = lps[j - 1];
            }
            // If the characters match, extend the matching prefix and suffix
            if (needle[i] == needle[j]) {
                j++;
            }
            // Update the LPS value for the current position
            lps[i] = j;
        }
        
        return lps; // Return the computed LPS array
    }
};
