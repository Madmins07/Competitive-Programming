#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n],a;
        set<int> x;
        for(int i=0;i<n;i++){
            cin>>a;
            arr[i]=a;
            x.insert(a);
        }
        int l=x.size();
        if((n-l)%2==0 && l!=0){
            cout<<l<<endl;
        }else{
            cout<<l-1<<endl;
        }
 
    }
    return 0;
}
