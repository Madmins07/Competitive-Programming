class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        const int n = grid.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++){
            int rowmax=-1,colmax=-1;
            for(int j=0;j<n;j++){
                if(grid[i][j]>rowmax){
                    rowmax=grid[i][j];
                }
            }
            for(int j=0;j<n;j++){
                if(grid[j][i]>colmax){
                    colmax=grid[j][i];
                }
            }
            ans.push_back(make_pair(rowmax,colmax));
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int temp =grid[i][j];
                grid[i][j]=min({ans[i].first,ans[j].second});
                sum+=grid[i][j]-temp;
            }
        }
        return sum;
    }
};
