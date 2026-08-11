class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int i = 0;
        while (i < n && s[i] == ' ') i++;

        bool neg = false;
        if (i < n && (s[i] == '-' || s[i] == '+'))
        {
            if (s[i] == '-') neg = true;
            i++;
        }

        long res = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9')
        {
            res = res * 10 + (s[i] - '0');
            if (!neg && res > INT_MAX) return INT_MAX;
            if (neg && -res < INT_MIN) return INT_MIN;
            i++;
        }

        return neg ? -res : res;
    }
};