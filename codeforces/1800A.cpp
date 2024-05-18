#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char s1[4] = {'m', 'e', 'o', 'w'};
        int x = 0, count = 0;
        for (int i = 0; i < n; i++) {
            if (tolower(s[0]) != 'm') break;
            if (tolower(s[i]) == s1[x]) {
                count++;
            } else {
                if (x <= 2 && tolower(s[i]) == s1[x + 1]) {
                    x++;
                    count++;
                }
            }
        }
        if (count == n && x == 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
