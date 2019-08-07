#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int L,W,H,i,T;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d",&L,&W,&H);
        if(L>=1 && L<=50 && W>=1 && W<=50 && H>=1 && H<=50)
        {
            if(L<=20 && W<=20 && H<=20)
            {
                printf("Case %d: good\n",i);
            }
            else
            {
                printf("Case %d: bad\n",i);
            }
        }
    }
    return 0;
}
