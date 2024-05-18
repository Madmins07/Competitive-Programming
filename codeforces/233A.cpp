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
    if(n%2!=0){
        cout<<-1<<endl;
    }else{
        int x=2;
        for(int i=0;i<n/2;i++){
            cout<<x<<" "<<x-1<<" ";
            x+=2;
        }
    }
 
    return 0;
}
