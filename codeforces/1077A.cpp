#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int t;
    ll int a, b, k;
    cin >> t;
    while (t--) {
        cin >> a >> b >> k;
        if (k % 2 == 0) {
            cout << (a * (k / 2)) - (b * (k / 2)) << endl;
        } else {
            cout << (a * (k / 2 + 1)) - (b * (k / 2)) << endl;
        }
    }
    return 0;
}
