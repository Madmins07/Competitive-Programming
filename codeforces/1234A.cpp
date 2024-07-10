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
        cin >> n;
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum > ((sum / n) * n)) cout << sum / n + 1 << endl;
        else cout << sum / n << endl;
    }
    return 0;
}
