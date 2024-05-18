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
        cin>>a>>b;
        int count=0;
        if(a>b){
            while(b!=a){
                if((a-b)%2==0){
                    a-=a-b;
                    count++;
                }
                else{
                    a++;
                    count++;
                }
            }
        }else{
            while(b!=a){
                if((b-a)%2!=0){
                    a+=b-a;
                    count++;
                }
                else{
                    a--;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
