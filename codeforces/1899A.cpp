#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        if(n%3==0){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
    return 0;
}
