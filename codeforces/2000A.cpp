#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        const int n = a.length();
        if (n >= 3) {
            if (a[0] == '1' && a[1] == '0') {
                if (a[2] != '0') {
                    if (a[2] == '1' && n == 3) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                    }
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
