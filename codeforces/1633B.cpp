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
        string s;
        cin >> s;
        const int n = s.length();
        int count = 0;
        for (auto &ch: s) {
            if (ch == '1') {
                count++;
            }
        }
        if (n == 1 || n == 2) {
            cout << 0 << endl;
        } else if (count != n - count) cout << min({count, n - count}) << endl;
        else cout << min({count, n - count}) - 1 << endl;
    }
    return 0;
}
