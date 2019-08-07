#include<bits/stdc++.h>
using namespace std;
#define n 1000000


long long int prm[n];
bool arr[n];

void seive()

{
    long long int j,f=0;
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;

    for(long long int i=4; i<=n; i=i+2)
    {
        arr[i]=1;
    }
    for(long long int i=3; i<=sqrt(n); i+=2)
    {
        if(arr[i]==0)
        {
            for(long long int j=i*i; j<=n; j=j+i*2)
            {
                arr[j]=1;
            }
        }
    }
}

int main()
{
    long long int num,s[200000],rem,sum,temp;

    seive();

    while ( scanf("%lld",&num)==1)
    {
        sum=0;
        temp = num;
        while(num > 0)
        {
            rem = num%10;
            sum = (sum*10) + rem;
            num = num/10;
        }

        if (arr[temp]==0 && temp!=sum && arr[sum]==0)
        {
            printf("%lld is emirp.\n",temp);
        }

        else    if(arr[temp]==0)
        {
            printf("%lld is prime.\n",temp);
        }

        else
        {
            printf("%lld is not prime.\n",temp);
        }
    }
    return 0;
}

