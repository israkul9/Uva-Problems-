#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N,arr[12],j,i,t,test;
    scanf("%d",&test);
    if(test>1 && test<=100)
    {
        for(t=1; t<=test; t++)
        {
            scanf("%d",&N);
            if(N>1 && N<11)
            {
                for(i=0; i<N; i++)
                {
                    scanf("%d",&arr[i]);
                }
                j=N/2;
            }

            printf("Case %d: %d\n",t,arr[j]);
        }
    }
    return 0;
}

