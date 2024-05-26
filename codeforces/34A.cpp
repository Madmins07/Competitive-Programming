#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main() {
    fastread();
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min = 1001, temp1, temp2;
    for (int i = 0; i < n; i++) {
        if (i != n - 1 && fabs(arr[i] - arr[i + 1]) < min) {
            min = fabs(arr[i] - arr[i + 1]);
            temp1 = i + 1;
            temp2 = i + 2;
        } else if (i == n - 1 && fabs(arr[i] - arr[0]) < min) {
            min = fabs(arr[i] - arr[0]);
            temp1 = n;
            temp2 = 1;
        }
    }
    cout << temp1 << " " << temp2 << endl;
    return 0;
}
