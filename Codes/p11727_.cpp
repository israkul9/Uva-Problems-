
#include<stdio.h>
int main()
{
    int T,i,a,b,c,d;
    while( scanf("%d",&T)==1)
    {
        for(i=1; i<=T; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(a>1000||a<10000)
            {
                if(b>1000||b<10000)
                {
                    if(c>1000||c<10000)
                    {
                        if(a>b && a<c||a<b&&a>c)
                            d=a;
                        else if(b>a&&b<c||b<a&&b>c)
                            d=b;
                        else if(c>b && c<a||c<b&&c>a)
                            d=c;
                    }
                }
            }
            printf("Case %d: %d\n",i,d);

        }
        return 0;

    }
}
