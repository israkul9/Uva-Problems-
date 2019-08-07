#include<bits/stdc++.h>
using namespace std;


int main ()
{
    long int a,b,sum,i;
    while (1)
    {
        scanf("%ld%ld",&a,&b);
        if(a==0 && b==0) break;
        sum=0;
        for(i=a; i<=b; i++)
        {
            sum = sum+i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
