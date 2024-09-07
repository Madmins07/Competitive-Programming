#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, x, y, k;
    cin >> t;
    while (t--) {
        cin >> x >> y >> k;
        if (x > y) {
            cout << (x + k - 1) / k + max({(y + k - 1) / k, (x + k - 1) / k - 1}) << endl;
        } else {
            cout << (y + k - 1) / k + max({(x + k - 1) / k, (y + k - 1) / k}) << endl;
        }
    }
    return 0;
}
