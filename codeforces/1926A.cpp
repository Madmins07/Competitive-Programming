#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
 
    while(t--){
        char s[6];
        cin>>s;
        int count=0;
        for(int i=0;i<5;i++){
            if(s[i]=='A'){
                count++;
            }
        }
        if(count>=3){
            cout<<"A"<<endl;
        }else{
            cout<<"B"<<endl;
        }
 
    }
    return 0;
}
