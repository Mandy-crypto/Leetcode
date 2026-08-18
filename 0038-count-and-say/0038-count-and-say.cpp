class Solution {
public:
    string rle(string s)
    {
        int k=s.size();
        string res;
        char prev;
        int cnt=0;
        for(int i=0;i<k;i++)
        {
            if(i==0) 
            {
                prev=s[i];
                cnt++;
            }
            else
            {
                if(s[i]==prev)
                {
                    cnt++;
                }
                else
                {
                    res+=to_string(cnt);
                    res.push_back(prev);
                    cnt=0;
                    prev=s[i];
                    cnt++;
                }
            }
        }
        res+=to_string(cnt);
        res.push_back(prev);
        return res;

    }
    string countAndSay(int n) {
        string ans;
        for(int i=0;i<n;i++)
        {
            if(i==0) ans="1";
            else
            {
                string count;
                count=rle(ans);
                ans=count;
            }
        }
        return ans;
    }
};