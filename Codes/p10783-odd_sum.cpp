#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i=0,j,d,T,temp;
    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {
        scanf("%d%d",&a,&b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        d=0;
        for (i=a; i<=b; i++)
        {
            if(i%2!=0)
                d=d+i;
        }
        printf("Case %d: %d\n",j,d);
    }
    return 0;
}
