#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,j,i;
    for (i=1,j=0; j<=1500; i++)
    {
        n=i;
        while (n%2==0)
            n=n/2;
        while (n%3==0)
            n=n/3;
        while (n%5==0)
            n=n/5;
        if (n==1)
            j++;
    }
    printf("The 1500'th ugly number is %lld.",i-1);
    return 0;
}

