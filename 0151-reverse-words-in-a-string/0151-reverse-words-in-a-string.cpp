class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Remove extra spaces in-place (leading, trailing, multiple between words)
        int n = s.size();
        int slow = 0; // pointer to write position

        // Skip leading spaces
        int i = 0;
        while (i < n) {
            // skip spaces before a word
            while (i < n && s[i] == ' ') i++;
            if (i >= n) break;

            // copy word
            if (slow != 0) s[slow++] = ' '; // separator before word (except first)
            while (i < n && s[i] != ' ') {
                s[slow++] = s[i++];
            }
        }
        s.resize(slow); // trim the unused tail

        // Step 2: Reverse the entire cleaned string
        reverse(s.begin(), s.end());

        // Step 3: Reverse each word back to normal
        int start = 0;
        for (int j = 0; j <= (int)s.size(); j++) {
            if (j == (int)s.size() || s[j] == ' ') {
                reverse(s.begin() + start, s.begin() + j);
                start = j + 1;
            }
        }

        return s;
    }
};