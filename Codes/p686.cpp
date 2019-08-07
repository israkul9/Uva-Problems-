

///bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
#define MAX 327610
using namespace std;

bool arr[MAX];
int i,j;
int sq = sqrt(MAX);


void seive()
{
    for(i=4; i<=MAX; i=i+2)
    {
        arr[i]=1;
    }
    for(i=3; i<=sq; i=i+2)
    {
        if(arr[i]==0)
        {
            for(j=i*i; j<=MAX; j=j+(2*i))
            {
                arr[j]=1;
            }
        }
    }

}

int main()
{
    seive();

    int k,n,count,test;
    while(true)
    {
        count=0;

        scanf("%d",&n);
        if(n==0)return 0;

        for(i=2; i<=n/2; i++)
        {
            if(arr[i]==0 and arr[n-i]==0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

