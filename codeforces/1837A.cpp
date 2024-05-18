#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, x, k;
    cin >> t;
    while (t--) {
        cin >> x >> k;
        int count = 0, rem = x, flag = 0, arr[2] = {0, 0};
        for (int i = x; i >= 0 && rem != 0; i--) {
            if (i % k != 0 && flag != 1) {
                count++;
                arr[0] = i;
                rem -= i;
                flag = 1;
            }
            if (i == rem && i % k != 0) {
                count++;
                arr[1] = i;
                rem -= i;
            }
        }
        cout << count << "\n";
        if (arr[1] == 0) cout << arr[0] << endl;
        else cout << arr[0] << " " << arr[1] << endl;
    }
    return 0;
}
