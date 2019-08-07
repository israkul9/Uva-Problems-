

#include<bits/stdc++.h>
using namespace std;
#define max 214748364

bool arr[max];

long long int i,j,p;

void seive ()
{

    arr[0]=arr[1]=1;
    arr[2]=0;
    for( i=4 ; i<=max ; i=i+2)
    {
        arr[i]=1;
    }

    for( i=3 ; i<=sqrt(max) + 1 ; i=i+2)
    {
        if(arr[i] == 0)
        {
            for( j=i*i ; j<=max; j=j+(2*i))
            {
                arr[j]=1;
            }
        }
    }
    for( p=2;p<=max;p++)
    {
        if(arr[p]==0)
        {
            printf("%lld ",p);
        }
    }
}



int main()
{
    seive();



    return 0;
}



