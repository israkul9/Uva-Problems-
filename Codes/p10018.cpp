#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,j,d,ck,a,s,test,i;
    cin>>test;
    for(i=1; i<=test; i++)
    {
        cin>>n;
        a=n;
        ck=0;
        while(1)
        {
            s=0;
            while(n!=0)
            {
                d=(n%10);
                s=(s*10)+d;
                n=(n/10);
            }
            if(s==a)
            {
                break;
            }
            else
            {
                n=s+a;
                a=n;
                ck++;
            }
        }
        printf("%lld %lld\n",ck,a);
    }
    return 0;
}
