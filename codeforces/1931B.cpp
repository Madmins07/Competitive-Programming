#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;
 
    ll arr[n];
 
    ll sum = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
 
    ll avg = sum / n;
 
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < avg)
        {
            cout << "NO\n";
            return;
        }
 
        arr[i + 1] += arr[i] - avg;
        arr[i] = avg;
    }
 
    cout << "YES\n";
 
 
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
