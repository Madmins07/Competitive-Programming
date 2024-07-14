#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int b, c, h;
        cin >> b >> c >> h;
        b -= 2;
        if (b == 0) cout << 3 << endl;
        else {
            b += 1;
            if (c + h >= b) {
                cout << (b) * 2 + 1 << endl;
            } else {
                cout << (c + h) * 2 + 1 << endl;
            }
        }
    }
    return 0;
}
