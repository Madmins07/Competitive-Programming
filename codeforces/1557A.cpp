#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        ll int arr[n], max = -1000000001;
        long double avg = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > max) {
                max = arr[i];
            }
            avg += arr[i];
        }
        avg = avg - max;
        avg = avg / (n - 1);
        cout << setprecision(12) << avg + max << endl;
    }
    return 0;
}
