#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float u,a,t,v,s;
    int n,i=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            scanf("%f%f%f",&u,&v,&t);
            a=(v-u)/t;
            s=(u*t+.5*a*t*t);
            printf("Case %d: %.03f %.03f\n",i,s,a);
        }
        else if(n==2)
        {
            scanf("%f%f%f",&u,&v,&a);
            t=(v-u)/a;
            s=(u*t+.5*a*t*t);
            printf("Case %d: %.03f %.03f\n",i,s,t);

        }
        else if (n==3)
        {
            scanf("%f%f%f",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.03f %.03f\n",i,v,t);

        }
        else if(n==4)
        {
            scanf("%f%f%f",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.03f %.03f\n",i,u,t);
        }
        i++;
    }
    return 0;
}
