#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        for (int i = n; i > m; i--) {
            cout << i << " ";
        }
        for (int i = 1; i <= m; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
