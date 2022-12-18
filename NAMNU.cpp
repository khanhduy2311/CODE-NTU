#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int m,n;
    cin>>m>>n;
    string s;
    cin>>s;
    int a[2000001];
    for (int i=0;i<m+n;i++) a[i+1]=int(s[i])-48;
    a[m+n+1]=a[1];
    int d1=0,d0=0;
    for (int i=1;i<=m+n;i++)
    {
        if ((a[i]==a[i+1]) && (a[i]==1)) d1++;
        if ((a[i]==a[i+1]) && (a[i]==0)) d0++;
    }
    cout<<abs(d1-d0);
}
    
