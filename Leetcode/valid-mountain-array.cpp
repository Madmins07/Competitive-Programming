class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        const int n = arr.size();
        if(n==1) return false;
        if(n==3){
            if(arr[0]<arr[1] && arr[1]>arr[2]){
                return true;
            }else{
                return false;
            }
        }
        int pos=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                pos++;
            }else if(arr[i]==arr[i+1] || pos==n-1){
                return false;
            }else {
                break;
            }
        }
        if(pos==n-1 || pos==0)return false;
        for(int i=pos;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                pos++;
            }else{
                return false;
            }
        }
        return true;
    }
};
