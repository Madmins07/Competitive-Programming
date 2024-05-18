#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++ ){
                if(j+1==arr[i] && i+1==arr[j]){
                    cout<<2<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==0){
            cout<<3<<endl;
        }
    }
    return 0;
}
