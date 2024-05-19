#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int sum(string str1,string str2,int m);
int main() {
    fastread();
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> ans;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'z' || s[i] == 'n')ans[s[i]]++;
    }
    int o = 0, z = 0;
    for (auto itr = ans.begin(); itr != ans.end(); itr++) {
        if (itr->first == 'z') z = itr->second;
        else if (itr->first == 'n') o = itr->second;
    }
    while (o--) {
        cout << 1 << " ";
    }
    while (z--) {
        cout << 0 << " ";
    }
    cout << endl;

    return 0;
}
