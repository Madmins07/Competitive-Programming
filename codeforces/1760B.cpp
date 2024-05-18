#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        char s[n];
        cin>>s;
        char a='a';
        for(int i=0;i<n;i++){
            if(s[i]>a){
                a=s[i];
            }
        }
        cout<<a-'a'+1<<endl;
    }
    return 0;
}
