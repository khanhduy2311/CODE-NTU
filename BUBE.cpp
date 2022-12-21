#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
 
    int a[n+1];
    for(int i=1;i<=n;++i) cin>>a[i];
 
    sort(a+1,a+n+1);
    reverse(a+1,a+n+1);
 
    queue<int>q;
 
    long long ans=0;
 
    for(int i=1;i<=n;++i){
        if(q.empty()||q.front()-k<a[i]) ans+=a[i];
        else q.pop();
        q.push(a[i]);
    }
 
    cout<<ans;
 
    return 0;
}
