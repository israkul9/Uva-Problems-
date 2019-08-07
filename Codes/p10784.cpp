#include<bits/stdc++.h>
using namespace std;


int main ()
{
    double n,d,c,e,f,i;

    for(i=1; scanf("%lf",&n) && n; i++)
    {

        d = (4 *(1)*(2*n));
        c = (3 + sqrt(9+d));
        e = (2);
        f = ceil(c/e);
        printf("Case %.0lf: %.0lf\n",i,f);

    }

    return 0;
}

