#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int sum;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        if(n>10)
        {
            while (n>10)
            {
                sum=0;
                while (n>0 )
                {
                    sum=sum+n%10;
                    n=n/10;
                }
                n=sum;
            }
            printf("%d\n",sum);

        }
        else
        {
            printf("%lld\n",n);

        }
    }
    return 0;
}




