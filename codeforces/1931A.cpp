#include<bits/stdc++.h>
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
        if(n>=28 && n<=53){
            cout<<'a'<<(char)(n-28+'a')<<'z'<<endl;
        }else if(n>=53){
            cout<<(char)(n-53+'a')<<'z'<<'z'<<endl;
        }else{
            cout<<'a'<<'a'<<(char)(n-3+'a')<<endl;
        }
    }
    return 0;
}
