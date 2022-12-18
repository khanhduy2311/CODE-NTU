#include<iostream>
#include<math.h>
using namespace std;
bool ngto(long long n)
{
    if (n<2) return false;
    for (int i=2;i<=int(sqrt(n));i++) if (n%i==0) return false;
    return true;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long n;
    cin>>n;
    if (ngto(n)) cout<<"YES";
     else cout<<"NO";
}
    
