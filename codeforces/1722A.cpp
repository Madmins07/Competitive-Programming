#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char arr[n];
        cin>>arr;
        sort(arr,arr+n);
        int x=strlen(arr);
        if(x==5 && arr[0]=='T' && arr[1]=='i' && arr[2]=='m' && arr[3]=='r' && arr[4]=='u'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
