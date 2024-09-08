#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, l, r;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        if ((r - l + 1) % 2 != 0) {
            if (l % 2 != 0) {
                cout << (r - l + 2) / 4 << endl;
            } else {
                cout << (r - l + 1) / 4 << endl;
            }
        } else cout << (r - l + 1) / 4 << endl;
    }

    return 0;
}
