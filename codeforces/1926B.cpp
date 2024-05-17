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
        int count[n];
        for (int i = 0; i < n; i++) {
            count[i] = 0;
            cin >> s;
            for (int j = 0; j < n; j++) {
                if (s[j] - '0' == 1) count[i]++;
            }
        }
        int flag = 1;
        for (int i = 0; i < n - 1; i++) {
            if (count[i] != 0 && count[i] == count[1 + i]) {
                cout << "SQUARE" << endl;
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            cout << "TRIANGLE" << endl;
        }
    }
}
