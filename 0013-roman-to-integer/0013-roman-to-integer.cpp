class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int ans=0;
        int prev=0;
        for(int i=n-1;i>=0;i--)
        {
            int val=0;
            if(s[i]=='I') val=1;
            if(s[i]=='V') val=5;
            if(s[i]=='X') val=10;
            if(s[i]=='L') val=50;
            if(s[i]=='C') val=100;
            if(s[i]=='D') val=500;
            if(s[i]=='M') val=1000;
            if(val<prev) ans=ans-val;
            else ans=ans+val;
            prev=val;
        }
        return ans;
    }
};