#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int t,n;
    cin>>t;
 
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int flag=1;
        for(int i=0;i<n-1;i++){
            if((arr[i+1]-arr[i])<=1){
                continue;
            }else{
                flag=0;
                break;
            }
        }if(flag==0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
