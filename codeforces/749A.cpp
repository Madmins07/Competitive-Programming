#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
    }else{
        while(n>3){
            n-=2;
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return 0;
}
