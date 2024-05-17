#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int a1 = a.size();
        int b1 = b.size();
        if (a[a1 - 1] > b[b1 - 1]) {
            cout << '<' << endl;
        } else if (a[a1 - 1] < b[b1 - 1]) {
            cout << '>' << endl;
        } else if (a == b) cout << "=" << endl;
        else if (a[a1 - 1] == b[b1 - 1]) {
            if (a[a1 - 1] == 'S') {
                if (a1 > b1) cout << "<" << endl;
                else cout << ">" << endl;
            } else if (a1 > b1) cout << ">" << endl;
            else cout << "<" << endl;
        }
    }
}
