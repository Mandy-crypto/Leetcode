class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int k=needle.length();
        for(int i=0;i<=n-k;i++)
        {
            if(needle==haystack.substr(i,k)) return i;
        }
        return -1;
    }
};