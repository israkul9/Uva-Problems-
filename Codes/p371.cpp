#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long  int l,h,i,mx,ck,c,n;
    while (scanf("%lld %lld",&l,&h)==2)
    {
        if(l==0 && h==0) break;
        if(h<l)
        {
            swap(h,l);
        }
        mx=0;
        for(i=l; i<=h; i++)
        {
            ck=0;
            c=i;
            while (1)
            {
                if(c%2==0)
                {
                    c=c/2;
                }
                else
                {
                    c=(3*c + 1);
                }
                ck++;
                if (c==1) break;
            }
            if(ck>mx)
            {
                mx=ck;
                n=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,n,mx);
    }
    return 0;
}
