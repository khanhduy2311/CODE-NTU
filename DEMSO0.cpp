#include<iostream>
using namespace std;
int main()
{
	//freopen("TANCUNG.INP","r",stdin);
	//freopen("TANCUNG.OUT","w",stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,res=0;
    cin>>n;
    while (n>=5)
    {
        n/=5;
        res+=n;
    }
    cout<<res;
}
   
