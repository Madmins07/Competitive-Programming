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
        map<char, int> ans;
        vector<char> s1;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (ans[s[i]] != 1) {
                ans[s[i]]++;
            }
        }
        for (auto itr = ans.begin(); itr != ans.end(); itr++) {
            s1.push_back(itr->first);
        }
        map<char, char> key;
        int x = s1.size();
        for (int i = 0; i < x / 2 + 1; i++) {
            key[s1[i]] = s1[x - i - 1];
            key[s1[x - i - 1]] = s1[i];
        }
        for (int i = 0; i < n; i++) {
            s[i] = key[s[i]];
        }
        cout << s << endl;
    }
}
