#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    ll int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        char s[n];
        cin >> s;
        int x = 0;
        while (x <= n - 1) {
            if ((s[x] - '0') <= 2 && x<=n-3 && (s[x + 2] - '0') == 0 && (s[x + 3] - '0') != 0) {
                cout << (char) ((s[x] - '0') * 10 + (s[x + 1] - '0') + 96);
                x += 3;
            } else {
                cout << (char) (s[x] - '0' + 96);
                x++;
            }
        }
        cout << "\n";
    }
    return 0;
}
