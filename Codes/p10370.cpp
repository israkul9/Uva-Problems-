#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float b,avg,ck,result;
    int a[1000],i,j,N,C,m;
    scanf("%d",&C);
    for(m=0; m<C; m++)
    {
        scanf("%d",&N);
        if(N>=1 && N<=1000)
        {
            b=0;
            for(i=0; i<N; i++)
            {
                scanf("%d",&a[i]);
                b=b+a[i];
            }
            ck=0;
            avg=b/N;
            for(j=0; j<N; j++)
            {
                if(a[j]>avg)
                {
                    ck=ck+1;
                }
            }
            result=(100*ck)/N;
            printf("%.3f%%\n",result);

        }

    }
    return 0;
}
