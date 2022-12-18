#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    getline(cin,s);
    int q;
    cin>>q;
    int l=s.size();
    for (int i=1;i<=q;i++)
    {
        long long a,b;
        int x,y;
        cin>>a>>b;
        x=a%l;
        if (x==0) x=l;
        y=b%l;
        if (y==0) y=l;
        if (s[x-1]==s[y-1]) cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
    }
}
    
