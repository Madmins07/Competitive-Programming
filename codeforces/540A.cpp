#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main() {
    fastread();
    int n;
    cin>>n;
    char s[n],ans[n];
    cin>>s;
    cin>>ans;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=min({fabs(s[i]-ans[i]),10-fabs(s[i]-ans[i])});
    }
    cout<<sum<<endl;
    return 0;
}
