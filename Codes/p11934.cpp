#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int a,b,c,d,l,i,f,ck;
    while (scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        ck=0;
        for(i=0; i<=l; i++)
        {
            f=(a*i*i) + (b*i) + c;
            if(f%d==0)
            {
                ck++;
            }
        }
        printf("%ld\n",ck);
    }
    return 0;
}
