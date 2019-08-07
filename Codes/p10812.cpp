#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int s,d,e,f,t,test,i;
    scanf("%lld",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%lld%lld",&s,&d);
        if(d>s || (s-d)%2!=0)
        {
            printf("impossible\n");
        }
        else
        {
            t=s-d;
            e=t/2;
            f=e+d;
            printf("%lld %lld\n",f,e);
        }
    }
    return 0 ;
}

