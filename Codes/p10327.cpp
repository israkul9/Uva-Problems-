

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,j,arr[10000],ck,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
            scanf("%d",&arr[i]);
        ck=0;
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(arr[j]<arr[i])
                {
                    ck++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",ck);
    }
    return 0;

}
