/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll bigMod (ll base, ll p,ll m )
{
    if(p==1)
        return base;
    if(p==0)
        return 1;
    ll x = (bigMod(base,p/2,m))%m;
    x  = (x*x)%m; /// power even hoile
    if(p%2==1) /// power odd hoile
        x = (x*base)%m;

    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);


    int kase ;

    cin >> kase ;

    while(kase--)
    {

        ll x, y, z ;
        cin >> x >> y >> z ;
        cout << bigMod(x,y,z) << endl;

    }

    return 0;
}


