#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int arr[n],sum=0,count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2!=0){
                count++;
            }
        }
        if(sum%2!=0){
            cout<<"YES"<<endl;
        }else if(count==n){
            cout<<"NO"<<endl;
        }else if(count>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
