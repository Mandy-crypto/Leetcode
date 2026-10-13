class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        int mx=a[0],mn=a[0],ans=a[0];
        for(int i=1;i<n;i++)
        {
            int x=a[i];
            if(x<0) swap(mn,mx);
            mx=max(x*mx,x);
            mn=min(x*mn,x);
            ans=max(ans,mx);
        }
        return ans;
    }
};