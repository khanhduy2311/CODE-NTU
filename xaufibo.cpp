#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
#define endl '\n'
#define st first
#define nd second
 
using namespace std;
ll n, k;
ll dp[46] = {1, 0};
ll f[46] = {1, 1};
 
ll ans(ll n, ll k)
{
	if(n == 0) return 1;
	if(n == 1) return 0;
	if(f[n-2] >= k) return ans(n-2, k);
	return (dp[n-2] + ans(n-1, k - f[n-2]));
}
 
void solve()
{
	cin >> n >> k;
	cout << ans(n, k) << endl;
}
 
int main()
{
	cin.tie(0)->sync_with_stdio(0);
	ll t;
 
	for(ll i=2; i<=45; ++i)
	{
		f[i] = f[i-1] + f[i-2];
		dp[i] = dp[i-1] + dp[i-2];
	}
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
    
