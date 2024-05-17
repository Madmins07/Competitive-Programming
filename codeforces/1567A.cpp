#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        char s[n];
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') cout << 'D';
            else if (s[i] == 'D') cout << 'U';
            else cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}
