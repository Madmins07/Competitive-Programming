#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<= n/2;i++){
        if((n-i)%i==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
