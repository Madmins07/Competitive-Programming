#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n,d;
    cin>>t;
    while(t--) {
        int count=0;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] <= d) count++;
        }
        sort(arr,arr+n);
        if (count == n) cout << "YES" << endl;
        else{
            if(arr[0]+arr[1]<=d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
