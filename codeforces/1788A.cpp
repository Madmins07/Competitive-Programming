#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n], count = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 2) count++;
        }
        if (count % 2 != 0) cout << -1 << endl;
        else {
            count = count/2;
            int pos = 0, sum = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] == 2 & sum != count) {
                    sum++;
                }
                if (sum == count) {
                    pos = i;
                    break;
                }
            }
            cout << pos+1 << endl;
        }
    }
    return 0;
}
