#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    char arr[4];
    cin>>t;
    while(t--)
    {
        cin>>arr;
        if(arr[0]=='a' || arr[1]=='b' || arr[2]=='c'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}
