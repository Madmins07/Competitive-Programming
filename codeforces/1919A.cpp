#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,a,b;
    cin >> t;
    while (t--) {
        cin>>a>>b;
        if((a%2==0 && b%2!=0) || (a%2!=0 && b%2==0)){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}
