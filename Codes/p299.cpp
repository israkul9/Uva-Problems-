#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[1000],i,j,temp,n,ck,test;
    scanf("%lld",&test);
    for(int m=1; m<=test; m++)
    {
        scanf("%lld",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        ck=0;
        for (i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i]>arr[j])
                {
                    ck++;
                }
            }

        }
        printf("Optimal train swapping takes %lld swaps.\n",ck);
    }
    return 0;
}

