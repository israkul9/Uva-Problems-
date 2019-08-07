#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,i,j,ck,d,m;
    while( scanf("%d%d",&i,&j)==2 && i>0 && j>0)
    {
        d=0;
        printf("%d %d ",i,j);
        if(i>j)
        {
            swap(i,j);
        }
        for(m=i; m<=j; m++)
        {
            ck=1;
            a=m;
            while(a!=1)
            {
                if(a%2!=0)
                    a=(3*a+1);
                else
                    a=a/2;
                ck++;
            }
            if(ck>=d)
                d=ck;
        }
        printf("%d\n",d);
    }
    return 0;
}




