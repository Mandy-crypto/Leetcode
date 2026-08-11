class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int in=0,len=1;
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<2;k++)
            {
                int l=i,r=i+k;
                while(l>=0 && r<n && s[l]==s[r])
                {
                    if(r-l+1>len)
                    {
                        len=r-l+1;
                        in=l;
                    }
                    l--;
                    r++;
                }
            }
        }
        return s.substr(in,len);
    }
};