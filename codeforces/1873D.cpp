#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n,k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        char s[n];
        cin>>s;
        int l=0,count=0;
        while(l+k<=n-1){
            if(s[l]=='B'){
                l=l+k;
                count++;
            }else{
                l++;
            }
        }
        if(l+k>n-1){
            for(int i=l;i<n;i++){
                if(s[i]=='B'){
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
