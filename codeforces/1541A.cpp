#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2 == 0) {
            for (int i = 2; i <= n; i += 2) {
                cout << i << " " << i - 1 << " ";
            }
            cout << "\n";
        } else if (n == 1) {
            cout << 1 << endl;
        } else {
            cout << 3 << " " << 1 << " " << 2 << " ";
            if (n > 3)
                for (int i = 5; i <= n; i += 2) {
                    cout << i << " " << i - 1 << " ";
                }
            cout << "\n";
        }
    }
    return 0;
}
