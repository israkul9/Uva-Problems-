#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int T,cases=1;
    long int a,b,c;
    scanf("%d",&T);
    if(T>0 && T<20)
    {
        while(cases<=T)
        {
            scanf("%ld %ld %dl",&a,&b,&c);
            if(a+b>c && b+c>a && c+a>b)
            {
                if(a==b && b==c)
                {
                    printf("Case %d: Equilateral\n",cases);
                }
                else if(a==b||b==c||a==c)
                {
                    printf("Case %d: Isosceles\n",cases);
                }
                else if(a!=b||b!=c||c!=a)
                {
                    printf("Case %d: Scalene\n",cases);
                }
            }
            else

            {
                printf("Case %d: Invalid\n",cases);
            }

            cases++;
        }
    }
    return 0;
}
