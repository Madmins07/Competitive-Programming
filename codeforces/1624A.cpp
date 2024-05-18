#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],max=-1;
        int64_t min=9999999999;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        cout<<max-min<<endl;
 
    }
    return 0;
}
