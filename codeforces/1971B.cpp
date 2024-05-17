#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        const int n = s.size();
        char a = s[0];
        int flag = 1;
        for (int i = 0; i < n; i++) {
            if (s[i] == a) continue;
            else flag = 0;
        }
        if (flag == 1) cout << "NO" << endl;
        else {
            for (int i = 1; i < n; i++) {
                if (s[i] != a) {
                    s[0] = s[i];
                    s[i] = a;
                    break;
                }
            }
            cout << "YES" << endl;
            cout << s << endl;
        }
    }
    return 0;
}
