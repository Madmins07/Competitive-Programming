#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        if (x >= y) {
            cout << y << " " << x << endl;
        } else {
            cout << x << " " << y << endl;
        }

    }
    return 0;
}
