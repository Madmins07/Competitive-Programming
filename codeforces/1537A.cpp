#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
        }
        if(sum==n){
            cout<<0<<endl;
        }else if(sum-n<0){
            cout<<1<<endl;
        }else{
            cout<<sum-n<<endl;
        }
    }
    return 0;
}
