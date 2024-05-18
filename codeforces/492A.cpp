#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
    int n,count=0,val=1;
    cin>>n;
        while(n-val>=0){
            count++;
            val=val+count;
            n=n-val;
        }
    cout<<count<<endl;
    return 0;
}
