#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int t, a, b, c, d;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;

        if (a < b) {
            vector<int> arr1;
            for (int i = a + 1; i < b; i++) {
                arr1.push_back(i);

            }
            int flag1 = 0, flag2 = 0;
            int n = arr1.size();
            for (int i = 0; i < n; i++) {
                if (c == arr1[i]) { flag1 = 1; }
                if (d == arr1[i]) { flag2 = 1; }
            }
            if ((flag1 && !flag2) || (!flag1 && flag2))cout << "YES" << endl;
            else cout << "NO" << endl;
        } else {
            vector<int> arr1;
            for (int i = b + 1; i < a; i++) {
                arr1.push_back(i);
            }
            int flag1 = 0, flag2 = 0;
            int n = arr1.size();
            for (int i = 0; i < n; i++) {
                if (c == arr1[i]) { flag1 = 1; }
                if (d == arr1[i]) { flag2 = 1; }
            }
            if ((flag1 && !flag2) || (!flag1 && flag2))cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
