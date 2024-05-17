
 #include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        map<char, int> ans;
        char str[n];
        cin >> str;
        for (int i = 0; str[i]; i++) {
            if (ans.find(str[i]) == ans.end()) {
                ans.insert(make_pair(str[i], 1));
            } else {
                ans[str[i]]++;
            }
        }
        int count = 0;
        for (auto &it: ans) {
            if (it.first - 'A' + 1 <= it.second) count++;
        }
        cout << count << endl;
    }
}
