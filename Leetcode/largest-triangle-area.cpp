class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double curr,max=-1;
        const int n = points.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    curr = 0.5 * abs(((points[i][0]*(points[j][1]-points[k][1]))+(points[j][0]*(points[k][1]-points[i][1]))+(points[k][0]*(points[i][1]-points[j][1]))));
                    if(curr>max) max=curr;
                }
            }
        }
        return max;
    }
};
