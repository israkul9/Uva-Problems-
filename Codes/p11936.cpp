#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int a,b,c,N,i;
    scanf("%ld",&N);
    for(i=1; i<=N; i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a+b<=c || b+c<=a || c+a<=b)
        {

            printf("Wrong!!\n");
        }

        else
        {
            printf("OK\n");

        }
    }

    return 0;
}

