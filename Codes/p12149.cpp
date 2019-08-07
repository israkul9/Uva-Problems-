#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t, n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        t=0;
        for(int i=n; i>=1; i--)
        {
            t=t+(i*i);
        }
        printf("%lld\n",t);
    }
    return 0;
}

