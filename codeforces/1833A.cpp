#include<bits/stdc++.h>
#define pb push_back
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main() {
    fastread();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char s[n];
        cin>>s;
        map<string,int> ans;
        int count=0;
        for(int i=0;i<n-1;i++){
            string now;
            now.pb(s[i]); now.pb(s[i + 1]);
            if(ans[now] == 0){
                ++count;
                ans[now] = 1;
            }
        }
        cout<<count<<endl;
 
    }
    return 0;
}
