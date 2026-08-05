class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool ok=false;
        int a=-1;
        for(int i=0;i<m;i++)
        {
            if(target<=matrix[i][n-1] && target>=matrix[i][0]) a=i;
        }
        if(a==-1) return false;
        for(int i=0;i<n;i++)
        {
            if(target==matrix[a][i]) ok=true;
        }
        return ok;
    }
};