#include <iostream>
using namespace std;
int main ()
{
    int a,b,x,y,z;
    bool kt=false;
    int n,m;
    cin>>n>>m;
    for (a=1 ; a<=n ; a++)
    for (b=1 ; b<=n ; b++)
    if ( (a*5 + b*3 + (n-a-b)/3) == m && (n-a-b)%3==0)
    {
        x=  a;
        y=  b; 
        z=  (n-a-b);
        kt=true;
        break;
    }
    if (z==0) kt=false;
    if (kt==false) cout<<"-1"; else cout<<x<<" "<<y<<" "<<z;
    return 0;
}
