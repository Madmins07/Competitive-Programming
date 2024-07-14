class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        const int n1 = nums1.size();
        const int n2 = nums2.size();
        int count=0;
        for(long long int i = 0; i < n1 ; i++){
            for(long long int j = 0 ; j<n2;j++){
                for(long long int k=j+1;k<n2;k++){
                    if((long long)nums1[i]*nums1[i]==(long long)nums2[j]*nums2[k]){
                        count++;
                    }
                }
            }
        }
        for(long long int i = 0; i < n2 ; i++){
            for(long long int j = 0 ; j<n1;j++){
                for(long long int k=j+1;k<n1;k++){
                    if((long long)nums2[i]*nums2[i]==(long long)nums1[j]*nums1[k]){
                        count++;
                    }
                }
            }
        }
        return count;

    }
};
