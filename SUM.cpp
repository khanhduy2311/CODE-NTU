#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,s=0;
  cin>>n;
  long long k=int(sqrt(n));
  for (long long i=1;i<=k;i++) s+=n/i;
  s*=2;
  s-=k*k;
  cout<<s%1000000;
}
