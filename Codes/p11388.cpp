///UVa:GCD-LCM

#include<bits/stdc++.h>
using namespace std;

int main ()
{

    long long int num1,num2,t=1,n;
    scanf("%lld",&n);
    while (t<=n)
    {
        scanf("%lld %lld",&num1,&num2);

        if(num2 % num1 ==0)
        {
            printf("%lld %lld\n",num1,num2);
        }
        else
        {
            printf("-1\n");
        }
        t++;
    }

    return 0;
}

