#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n;
    int a;
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a<0) sum-=a;
            else sum+=a;
        }
        cout<<sum<<endl;
    }
    return 0;
}
