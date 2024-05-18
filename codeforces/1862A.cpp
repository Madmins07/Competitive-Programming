#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        string arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int x = 0;
        char s[4] = {'v', 'i', 'k', 'a'};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[j][i] == s[x]) {
                    x++;
                    break;
                }
            }
        }
        if (x == 4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
