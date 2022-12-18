#include<bits/stdc++.h>
using namespace std;
string cs(string n)
{
    int s=0;
    for (int i=0;i<=n.size()-1;i++) 
       s+=int(n[i])-48;
    n=to_string(s);
    if (n.size()>1) 
      return cs(n);
    else 
      return n;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL);
    string n;
    cin>>n;
    cout<<cs(n);
    return 0;
}
    
