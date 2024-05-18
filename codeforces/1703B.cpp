#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main()
{
    fastread();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char s[n];
        cin>>s;
        set <char> s1;
 
        for(int i=0;i<n;i++){
            s1.insert(s[i]);
        }
        int x=s1.size();
        cout<<x*2+(n-x)<<endl;
    }
    return 0;
}
