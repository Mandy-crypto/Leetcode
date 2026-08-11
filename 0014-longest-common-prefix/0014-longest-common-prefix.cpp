class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,(int)strs[i].length());
        }
        string ans;
        for(int i=0;i<mn;i++)
        {
            char c=strs[0][i];
            for(int j=1;j<n;j++)
            {
                if(strs[j][i]!=c) return ans;
            }
            ans.push_back(c);
        }
        return ans;
    }
};