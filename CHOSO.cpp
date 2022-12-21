#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    map<int,long long> ma;
    map<int,long long> mb;
    map<int,long long> mc;
    for (int i=1;i<=n;i++) 
    {
        cin>>a[i];
        ma[a[i]]++;
    }
    for (int i=1;i<=n;i++) 
    {
        cin>>b[i];
        mb[b[i]]++;
    }
    for (int i=1;i<=n;i++) 
    {
        cin>>c[i];
        mc[c[i]]++;
    }
    long long  d=0;
    for (int i=1;i<=n;i++)
    {
       d+=ma[a[i]]*mb[a[i]]*mc[a[i]];
       ma[a[i]]=0;
       mb[a[i]]=0;
       mc[a[i]]=0;
    }
    for (int i=1;i<=n;i++)
    {
       d+=ma[b[i]]*mb[b[i]]*mc[b[i]];
       ma[b[i]]=0;
       mb[b[i]]=0;
       mc[b[i]]=0;
    }
    for (int i=1;i<=n;i++)
    {
       d+=ma[c[i]]*mb[c[i]]*mc[c[i]];
       ma[c[i]]=0;
       mb[c[i]]=0;
       mc[c[i]]=0;
    }
    cout<<d;
    
    
}
   
