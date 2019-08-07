#include<bits/stdc++.h>
using namespace std;
int main ()
{
    unsigned long long int n,t;
    while (scanf("%lld",&n)==1 && n>0)
    {
        t=((n*10)/9);

        if(n%9==0)
        {
            printf("%lld %lld\n",t-1,t);
        }
        else
        {
            printf("%lld\n",t);
        }
    }
    return 0;
}
