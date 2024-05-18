#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        char s[n];
        cin >> s;
        int i, count = 0;
        for (i = 0; i < n; i++) {
            if (s[i] - '0' >= d) {
                cout << s[i];
                count++;
            } else {
                cout << d;
                break;
            }
        }
        for (i; i < n; i++) {
            cout << s[i];
        }
        if (count == n) cout << d;
 
        cout << "\n";
 
    }
    return 0;
}
