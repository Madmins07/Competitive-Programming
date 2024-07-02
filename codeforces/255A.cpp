#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, x;
    cin >> t;
    map<string, int> ans;
    for (int i = 0; i < t; i++) {
        cin >> x;
        if (i % 3 == 0) {
            ans["chest"] += x;
        } else if (i % 3 == 1) {
            ans["biceps"] += x;
        } else {
            ans["back"] += x;
        }
    }
    int max = -1;
    string s;
    for (auto &an: ans) {
        if (an.second > max) {
            s = an.first;
            max = an.second;
        }
    }
    cout << s << endl;
}
