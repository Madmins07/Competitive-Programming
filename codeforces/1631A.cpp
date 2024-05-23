#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int sum(string str1,string str2,int m);
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr1[n], arr2[n], max1 = -1, max2 = -1;
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
            if (arr1[i] > max1) max1 = arr1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
            if (arr2[i] > max2) max2 = arr2[i];
        }
        if (max1 > max2) {
            for (int i = 0; i < n; i++) {
                if (arr1[i] < arr2[i]) {
                    swap(arr1[i], arr2[i]);
                }
            }
            int min = *max_element(arr2, arr2 + n);
            int max = *max_element(arr1, arr1 + n);
            cout << max * min << endl;

        } else {
            for (int i = 0; i < n; i++) {
                if (arr1[i] > arr2[i]) {
                    swap(arr1[i], arr2[i]);
                }
            }
            int min = *max_element(arr1, arr1 + n);
            int max = *max_element(arr2, arr2 + n);
            cout << max * min << endl;
        }
    }
    return 0;
}
