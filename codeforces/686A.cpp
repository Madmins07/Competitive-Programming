#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int n;
    ll int x,d;
    cin>>n>>x;
    char a;
    ll sum=x;
    int count=0;
    while(n--){
        cin>>a>>d;
        if(a=='+'){
            sum+=d;
        }else if(sum>=d){
            sum-=d;
        }else{
            count++;
        }
    }
    cout<<sum<<" "<<count<<endl;
    return 0;
}
