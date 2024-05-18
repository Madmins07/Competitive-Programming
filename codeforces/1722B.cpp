#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin >> n;
        vector<char> a1,a2;
        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            a1.push_back(x);
        }
        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            a2.push_back(x);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(a1[i]==a2[i]){
                count++;
            }else if(a1[i]!='R' && a2[i]!='R'){
                count++;
            }else{
                break;
            }
        }
        if(count==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
