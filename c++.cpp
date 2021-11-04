#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,d,q;
    cin>>n>>m>>q;
    int gcd=__gcd(m,n);
    int lcm=m*n/gcd;
    n/=gcd;
    m/=gcd;
    while(q--)
    {
        cin>>d;
        if(d%gcd!=0)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        if(d>=2*lcm)
            d=lcm+d%lcm;
        d/=gcd;
        bool fine=false;
        for(int i=0;i<=d/n;i++)
        {
            if((d-i*n)%m==0)
            {
                cout<<"YES"<<'\n';
                fine=true;
                break;
            }
        }
        if(fine==false)
            cout<<"NO"<<'\n';
    }
    cout<<flush;
    system("pause");
    return 0;
}