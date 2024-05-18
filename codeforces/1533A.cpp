#include<bits/stdc++.h>
#include<cstring>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int end=n%10;
        if(end==9){
            cout<<n/10+1<<endl;
        }else{
            cout<<n/10<<endl;
        }
    }
    return 0;
}
