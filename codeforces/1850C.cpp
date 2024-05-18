#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,a,b;
    cin>>t;
 
    while(t--){
        char arr[8];
        vector<char> ans;
        for(int i=0;i<8;i++){
            cin>>arr;
 
            for(int j=0;j<8;j++){
                if(arr[j]!='.'){
                    ans.push_back(arr[j]);
                }
            }
 
        }
        int x=ans.size();
        for(int i=0;i<x;i++){
            cout<<ans[i];
        }
        cout<<"\n";
 
    }
    return 0;
}
