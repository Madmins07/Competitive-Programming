#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n;
        a = sqrt(n);
		b = cbrt(n);
		c = sqrt(cbrt(n));
		cout<<a+b-c<<endl;
    }
    return 0;
}
