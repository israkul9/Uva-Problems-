#include<bits/stdc++.h>
using namespace std;


long long int fib (long long int n)
{
    if(n == 0 || n ==1 ) return 1;
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    long long  int year,total,male,female;

    while (scanf("%lld",&year)==1 && year>0)
    {
        if(year == 1)
            printf("1 2\n");
        else
        {
            // female = fib(year);
            // male = female +1;
            // total = female + male;
            //cout<<male<<" "<<total<<endl;
            printf("%lld %lld\n",fib(year)+1,fib(year)+fib(year)+1);
        }
    }
    return 0;
}

