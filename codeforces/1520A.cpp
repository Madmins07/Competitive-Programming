#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char arr[n];
        cin>>arr;
        int flag2=0;
        for(int i=0;i<n-1;i++){
            char s=arr[i];
            int cunt=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]==s){
                    cunt++;
                }else{
                    break;
                }
            }
            for(int j=i+cunt+2;j<n;j++){
                if(arr[j]==s){
                    flag2=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(flag2==1){
                break;
            }
        }
        if(flag2==0){
            cout<<"YES"<<endl;
        }
 
 
    }
    return 0;
}
