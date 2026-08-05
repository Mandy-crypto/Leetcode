class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        stack<int> s;
        int area=0;
        for(int i=0;i<=n;i++)
        {
            int cur;
            if(i==n) cur=0;
            else cur=h[i];
            while(!s.empty() && h[s.top()]>=cur)
            {
                int ht=h[s.top()];
                s.pop();
                int w;
                if(s.empty()) w=i;
                else w=i-s.top()-1;
                area=max(area,ht*w);
            }
            s.push(i);
        }
        return area;
    }
};