
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main()
{
    fastread();
    int t;
    char s[10];
    char s1[10]={'c','o','d','e','f','o','r','c','e','s'};
    cin>>t;
    while(t--){
        int c=0;
        cin>>s;
        for(int i=0;i<10;i++){
            if(s[i]!=s1[i]){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
