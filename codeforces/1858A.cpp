#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a+c-c/2>b+c/2){
            cout<<"First"<<endl;
        }else
            cout<<"Second"<<endl;
    }
    return 0;
}
