#include<bits/stdc++.h>
using namespace std;
int main ()
{
     long int arr[200000],temp,j,n,i;
    while(scanf("%ld",&n)==1 && n>0 )
    {
        for( i=0; i<n; i++)
        {
            scanf("%ld",&arr[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%ld",arr[i]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
