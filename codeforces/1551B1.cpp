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
    while (t--) {
        string s;
        cin >> s;
        map<char, int> ans;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            ans[s[i]]++;
        }
        for (auto &an: ans) {
            if (an.second > 2) {
                n = n - an.second + 2;
            }
        }
        cout << n / 2 << endl;
    }
    return 0;
}
