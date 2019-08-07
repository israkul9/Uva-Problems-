#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,i,s,ck,t=1,temp;
    while(t<=201)
    {
        scanf("%d%d",&a,&b);
        if(a>b) swap(a,b);
        if(a==0 && b==0)
        {
            break;
        }
        ck=0;
        for(i=a; i<=b; i++)
        {
            s=sqrt(i);
            if(i==s*s)

                ck++;
        }
        printf("%d\n",ck);
        t++;
    }
    return 0;
}
