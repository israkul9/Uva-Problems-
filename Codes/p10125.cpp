#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,a[10000],i,j,sum=0;
    while (scanf("%lld",&n)==1 && n>0)
    {
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                    swap(a[i],a[j]);
            }
        }
        if((sum - a[n-1]) >= a[n-1])
        {
            printf("%lld\n",a[n-1]);
        }
        else
        {
            printf("no solution\n");
        }
    }
    //printf("%lld\n",a[n-1]);
//printf("%lld\n",sum);

    return 0;
}
