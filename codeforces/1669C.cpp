#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n], odd1= 0, even1 = 0,odd2=0,even2=0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i % 2 == 0) {
                if (arr[i] % 2 != 0) {
                    odd1++;
                } else { even1++; }
            } else {
                if (arr[i] % 2 != 0) {
                    odd2++;
                } else {
                    even2++;
                }
            }
        }
        if((odd1==0 || even1==0) && (odd2==0 || even2==0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
