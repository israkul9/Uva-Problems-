#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int a,b,c,T,i,d;
    scanf("%ld",&T);
    for(i=1; i<=T; i++)

    {
        scanf("%ld %ld %dl",&a,&b,&c);
        if(a+b>=c && b+c>=a && c+a>=b)
        {
            if(a==b==c)
            {
                printf("case %ld: Equilateral\n",i);
            }
            else if(a==b||b==c||c==a)
            {
                printf("case %ld: Isosceles\n",i);
            }
            else if(a!=b!=c)
            {
                printf("case %ld: Scalene\n",i);
            }
        }
        else
        {
            printf("case %ld: invalid\n",i);
        }

    }


    return 0;
}

