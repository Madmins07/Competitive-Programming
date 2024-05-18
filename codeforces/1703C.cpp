#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k=0;
        for (int i=0;i<n;i++) {
            cin>>x;
            char s[x];
            cin>>s;
            for(int j=0;j<x;j++){
                if(s[j]=='U'){
                    if(arr[k]==0){
                        arr[k]=9;
                    }else{
                        arr[k]-=1;
                    }
                }else{
                    if(arr[k]==9){
                        arr[k]=0;
                    }else{
                        arr[k]+=1;
                    }
                }
            }
            k++;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
 
    }
    return 0;
}
