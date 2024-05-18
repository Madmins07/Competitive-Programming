#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int sum(string str1,string str2,int m);
int main() {
    fastread();
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<string> arr;
        for (int i = 0; i < n; i++) {
            string str;
            cin >> str;
            arr.push_back(str);
        }
        vector<int> ans;
        for (int i = 0; i < n-1; i++) {
            for (int j = i + 1; j < n ; j++) {
                ans.push_back(sum(arr[i], arr[j], m));
            }
        }
        cout << *min_element(ans.begin(), ans.end()) << endl;

    }
    return 0;
}
int sum(string str1,string str2,int m) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += fabs(str1[i] - str2[i]);
    }
    return sum;
}
