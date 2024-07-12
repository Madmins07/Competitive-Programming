class Solution {
public:
    int maxArea(vector<int>& height) {
        const int n=height.size();
        int l=0,r=n-1,maxi;
        while(l<r){
            int curr = min(height[l], height[r]) * (r - l);
            maxi = max({maxi, curr});
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxi;
    }
};
