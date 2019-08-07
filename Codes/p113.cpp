#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double n,p,ck;
    double d;
    while (scanf("%lf%lf",&n,&p)==2)
    {
        d=(1/n);
        ck=pow(p,d);
        printf("%.0lf\n",ck);
    }

    return 0;
}

