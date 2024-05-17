#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
int main() {
    fastread();
    int t, a, c, b;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if ((a == b && c % 2 == 0) || (a == c && b % 2 == 0) || (b == c && a % 2 == 0)) {
            cout << "YES" << endl;
        } else {
            int sum = a + b + c;
            int y = max({a, b, c});
            if (2 * y == sum) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
