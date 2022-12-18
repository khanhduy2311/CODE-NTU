#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
typedef pair<int, int>pii;
pii a[1000006];
int i,j,n,res;
bool cmp(pii x, pii y)
{
	return x.se<y.se;
}
int main() 
{
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i].fi>>a[i].se;
	sort(a+1,a+n+1,cmp);
	for(i=1;i<=n;i++)
	{
		j=i-1;
		while (a[j].se>a[i].fi)
		{
			res++;
			j--;
		}
	}
	cout<<res;
	return 0;
}
    
