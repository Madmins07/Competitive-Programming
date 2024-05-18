#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    char arr[101];
    cin>>t;
    while(t--)
    {
        cin>>arr;
        int x=strlen(arr);
        int flag=0;
        if(x%2==0){
            for(int i=0;i<x/2;i++){
                if(arr[i]!=arr[i+x/2]){
                    flag=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(flag==0){
                cout<<"YES"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
