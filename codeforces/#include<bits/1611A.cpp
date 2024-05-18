#include<bits/stdc++.h>
#include<cstring>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int x = n.size();
        if (n[x - 1] % 2 == 0) cout << 0 << endl;
        else {
            int flag = 0;
            if (n[0] % 2 == 0) cout << 1 << endl;
            else {
                for (int i = 1; i < x; i++) {
                    if (n[i] % 2 == 0) {
                        cout << 2 << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    cout << -1 << endl;
                }
            }
 
        }
    }
    return 0;
}
