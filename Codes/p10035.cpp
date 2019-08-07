#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,d,ck,r;
    while (scanf("%ld%ld",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        ck=0;
        r=0;
        while(a||b)
        {
            c=a%10;
            d=b%10;
            if(c+d+r>=10)
            {
                ck=ck+1;
                r=1;
            }
            else
            {
                r=0;
            }
            a=a/10;
            b=b/10;
        }
        if(ck==0)
        {
            printf("No carry operation.\n");
        }
        else if(ck==1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%ld carry operations.\n",ck);
        }
    }
    return 0;
}





