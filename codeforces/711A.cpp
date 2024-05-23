#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int sum(string str1,string str2,int m);
int main() {
    fastread();
    int t;
    cin >> t;
    int flag = 1, n = t;
    vector<string> ans;
    while (t--) {
        string s;
        cin >> s;
        if (s[0] == 'O' && s[1] == 'O' && flag == 1) {
            s[0] = '+';
            s[1] = '+';
            flag = 0;
        } else if (s[3] == 'O' && s[4] == 'O' && flag == 1) {
            s[3] = '+';
            s[4] = '+';
            flag = 0;
        }
        ans.push_back(s);
    }
    if (flag == 0) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            cout << ans[i] << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
