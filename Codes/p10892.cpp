
//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;


vector<ll>divisor;

ll i,j,k,n;

ll gcd(ll a, ll b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}

ll LCM (ll x, ll y)
{
    ll multi = x*y;
    ll res = (multi)/gcd(x,y);
    return res;

}


void d(ll num)
{
    n = num;
    for( i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            divisor.push_back(i);
            if(i*i!=n)
            {
                divisor.push_back(n/i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());
//    for(j=0; j<divisor.size(); j++)
//    {
//        cout<<divisor[j]<<endl;
//    }

}


int main()
{
    ll input;
    while(1)
    {
        scanf("%llu",&input);
        if(input==0)
            return 0;
        d(input);
        ll ck=1;
        for(i=0; i<divisor.size(); ++i)
        {
            for(j=i+1; j<divisor.size(); j++)
            {
                if (LCM(divisor[i],divisor[j])==input)
                {
                    //printf("%llu %llu\n",divisor[i],divisor[j]);
                    ck++;
                }

            }
        }
        printf("%llu ",input);
        printf("%llu\n",ck);
        divisor.clear();
    }
    return 0;
}
