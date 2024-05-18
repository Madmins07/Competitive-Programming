#include<bits/stdc++.h>
#include<cstring>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int x = s.size();
        int flag = 0, l = 0, r = 0;
        for (int i = 0; i < x; i++) {
            if (s[i] == '1' && flag == 0) {
                l = i;
                flag = 1;
            }
            if (s[i] == '1') {
                r = i;
            }
        }
        int count = 0;
        for (int i = l; i < r; i++) {
            if (s[i] == '0') {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
