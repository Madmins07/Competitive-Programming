#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,a,n;
    cin>>t;
    while(t--){
        cin>>n;
        set<int> arr;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.insert(a);
        }
        cout<<arr.size()<<endl;
    }
    return 0;
}
