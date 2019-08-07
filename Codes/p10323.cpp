#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int factorial,N,i;
    while (scanf("%d",&N)==1)
    {
        factorial=1;
        for(i=1; i<=N; i++)
        {
            factorial=factorial*i;
        }
        if((N>=14) || (N<0 && N%2!=0))
        {
            printf("Overflow!\n");
        }
        if((N>=0 && N<=7) || (N<0 && N%2==0))
        {
            printf("Underflow!\n");
        }
        else if(N>=8 && N<=13)
        {
            printf("%d\n",factorial);
        }
    }
    return 0;
}


/*
#include<cstdio>
using namespace std;
int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        if((n>=0 && n<=7) || (n<0 && n%2==0)) printf("Underflow!\n");
        else if(n==8) printf("40320\n");
        else if(n==9) printf("362880\n");
        else if(n==10) printf("3628800\n");
        else if(n==11) printf("39916800\n");
        else if(n==12) printf("479001600\n");
        else if(n==13) printf("6227020800\n");
        else printf("Overflow!\n");
    }

    return 0;
}

*/
