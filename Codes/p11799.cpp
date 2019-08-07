#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s[100],i,N,j,c,m,T;
    scanf("%d",&T);
    for(c=1; c<=T; c++)
    {
        scanf("%d",&N);
        for(i=0; i<N; i++)
        {
            scanf("%d",&s[i]);
        }
        for(i=0; i<N; i++)
        {
            for(j=i+1; j<N; j++)
            {
                if(s[i]<s[j])
                {
                    m=s[i];
                    s[i]=s[j];
                    s[j]=m;
                }
            }
        }
        printf("Case %d: %d\n",c,s[0]);
    }
    return 0;
}
