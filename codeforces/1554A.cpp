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
        ll int arr[n];
        ll int max = -1;
        int pos;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            if ((arr[i] * arr[i + 1]) > max) {
                max = arr[i] * arr[i + 1];
            }
        }
        cout << max << endl;
    }
    return 0;
}
