#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
ull int fact(ull int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int main() {
    fastread();
    ull int a,b;
    cin>>a>>b;
    if(b>a){
        cout<<fact(a)<<endl;
    }else{
        cout<<fact(b)<<endl;
    }
    return 0;
}
