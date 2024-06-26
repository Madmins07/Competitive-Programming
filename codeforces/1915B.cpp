#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;
 
void solve()
{
    unordered_map<char, int> hMap;
 
    for (int i = 0; i < 9; i++)
    {
        char t;
        cin >> t;
        hMap[t]++;
    }
 
    char ans;
    for (auto itr : hMap)
    {
        if (itr.first != '?' and itr.second != 3)
            ans = itr.first;
    }
 
    cout << ans << nline;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }
 
}
