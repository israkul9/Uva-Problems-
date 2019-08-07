#include<bits/stdc++.h>
using namespace std;
int main()
{

    long int a,b,Y,X=1;
    while(scanf("%ld",&a))
    {
        if(a<0)
        {
            break;
        }
        b=1;
        Y=0;
        while(b<a)
        {
            b=2*b;
            Y=Y+1;
        }
        printf("Case %ld: %ld\n",X,Y);
        X++;


    }

    return 0;
}





