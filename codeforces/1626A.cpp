#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
