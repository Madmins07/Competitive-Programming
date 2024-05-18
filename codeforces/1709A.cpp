#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, x, a, b, c;
    cin >> t;
    while (t--) {
        cin >> x;
        int arr[3], count = 0;
        cin >> arr[0] >> arr[1] >> arr[2];
        for (int i = 0; i < 3; i++) {

            if (arr[x - 1] != 0 && count != 2) {
                x = arr[x - 1];
                count++;
            } else if (count != 2) {
                cout << "NO" << endl;
                break;
            }
        }
        if (count == 2) cout << "YES" << endl;
    }
    return 0;
}
