#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long   int test,farmer_no,a,b,c,ck,i,j;
    while(scanf("%lld",&test)!=EOF)
    {
        for(j=1; j<=test; j++)
        {
            ck=0;
            scanf("%lld",&farmer_no);
            if(farmer_no > 0 && farmer_no < 20)
            {
                for(i=1; i<=farmer_no; i++)
                {
                    scanf("%lld%lld%lld",&a,&b,&c);
                    ck=ck+a*c;
                }
            }
            printf("%lld\n",ck);
        }
    }
    return 0;
}
