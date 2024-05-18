#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n ;
        char s[n];
        cin>>s;
        int l=0,r=1;
        cout<<s[0];
        while(r!=n-1){
            if(s[r]!=s[l]){
                r++;
            }else{
                l=r+1;
                r=l+1;
                cout<<s[l];
            }
        }
        cout<<"\n";
    }
    return 0;
}
