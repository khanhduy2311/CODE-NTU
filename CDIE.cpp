#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
        int n, m;   cin >> n >> m;
        int a[n+5];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n, greater<int>());
        int i = 0;
        for (int total = 1; total < m; ++i) {
            total += (a[i] - 1);
        }
        cout << ((i > n) ? -1 : i);
    return 0;
}
    
