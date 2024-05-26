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
        vector<int> arr;
        int count = 0, temp, flag = 1, p;
        for (int i = 0; i < n; i++) {
            cin >> p;
            arr.push_back(p);
            if (arr[i] >= arr[i - 1] && i != 0) {
                count++;
            } else if (i != 0 && flag == 1) {
                temp = count;
                flag = 0;
            }
        }
        if (count == n - 1) {
            cout << "Yes" << endl;
        } else {
            vector<int> ans;
            for (int k = temp + 1; k < n; k++) {
                ans.push_back(arr[k]);
            }
            for (int i = 0; i <= temp; i++) {
                ans.push_back(arr[i]);
            }
            count = 0;
            for (int i = 0; i < n - 1; i++) {
                if (ans[i] <= ans[i + 1]) {
                    count++;
                }
            }
            if (count == n - 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
