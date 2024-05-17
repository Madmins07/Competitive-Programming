#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x, even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x % 2 == 0) even++;
            else odd++;
        }
        if (odd > even) cout << even << endl;
        else cout << odd << endl;
    }
    return 0;
}
