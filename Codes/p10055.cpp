#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if (b>a)
        {
            c=b-a;
        }
        else
        {
            c=a-b;
        }
        printf("%lld\n",c);

    }

    return 0;
}
