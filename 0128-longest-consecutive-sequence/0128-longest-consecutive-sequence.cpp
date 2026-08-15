class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans=0;
        for(int x:st) {
            if(st.find(x-1)==st.end()) {
                int len=1;
                int y=x;
                while(st.find(y+1)!=st.end()) {
                    y++;
                    len++;
                }
                ans=max(ans,len);
            }
        }
        return ans;
    }
};