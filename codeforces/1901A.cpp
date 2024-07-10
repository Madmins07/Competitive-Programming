#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int maxdf = -1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] > maxdf) maxdf = arr[i + 1] - arr[i];
        }
        cout << max({arr[0], maxdf, 2 * (x - arr[n - 1])}) << endl;
    }
    return 0;
}
