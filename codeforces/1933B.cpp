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
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % 3 == 0) {
            cout << 0 << endl;
        } else if ((sum + 1) % 3 == 0) { cout << 1 << endl; }
 
        else {
            int flag = 0;
            for (int i = 0; i < n; i++) {
                if ((sum - arr[i]) % 3 == 0) {
                    cout << 1 << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) cout << 2 << endl;
        }
 
    }
    return 0;
}
