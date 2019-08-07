#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int i,j,n,a[10000],ck;
    int test;
    scanf("%d",&test);
    for(int f=1; f<=test; f++)
    {
        scanf("%lld",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i] > a[j])
                {
                    ck=a[i];
                    a[i]=a[j];
                    a[j]=ck;
                }
            }
        }
        printf("%lld",(a[n-1]-a[0])*2);
        printf("\n");
    }
    return 0;
}
