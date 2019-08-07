#include<stdio.h>
int main ()
{
    int N,K,P,d,e,i,T;
    scanf("%d",&T);
    if(T<=1000)
    {
        for(i=1; i<=T; i++)
        {
            scanf("%d%d%d",&N,&K,&P);
            e=K+P;
            while(e>N)
            {
                e=e-N;
            }
            printf("Case %d: %d\n",i,e);


        }
    }

    return 0;
}
