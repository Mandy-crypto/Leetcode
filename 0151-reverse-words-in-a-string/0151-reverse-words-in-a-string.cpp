class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int slow = 0;
        int k = 0;
        while (k < n) {
            while (k < n && s[k] == ' ') k++;
            if (k >= n) break;
            if (slow != 0) s[slow++] = ' ';
            while (k < n && s[k] != ' ') s[slow++] = s[k++];
        }
        s.resize(slow);
        n = s.length();

        reverse(s.begin(), s.end());

        int i = 0, j = 0;
        while (i < n)
        {
            j = i;
            while (j < n && s[j] != ' ') j++;
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }

        return s;
    }
};