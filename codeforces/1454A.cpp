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
        if(n%2==0){
            for(int i=0;i<n;i++){
            cout<<n-i<<" ";
            }
        }else{
            for(int i=0;i<n;i++){
                if(i!=n/2 && i!=n/2+1) cout<<n-i<<" ";
                else if(i==n/2) cout<<n/2<<" ";
                else cout<<n/2+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
