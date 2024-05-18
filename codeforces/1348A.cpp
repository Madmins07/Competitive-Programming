#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int a=0,b=0;
        for(int i=0;i<n-1;i++){
            if(i<n/2-1) a+=pow(2,i+1);
            else b+=pow(2,i+1);
        }
        a+=pow(2,n);
        cout<<fabs(b-a)<<endl;
 
    }
    return 0;
}
