
#include<bits/stdc++.h>
using namespace std;
#define n 10000000

bool arr[n];
int prime[n],f=0;

void seive ()
{

    arr[2]=0;
    for(int i=4 ; i<=n ; i = i+2)
    {
        arr[i]=1;
    }

    for(int i=3 ; i<=sqrt(n) ; i = i+2)
    {
        if(arr[i] == 0)
        {
            for(int j=i*i ; j<=sqrt(n); j = j + (2*i))
            {
                arr[j]=1;
            }
        }

    }
    for (int p=2; p<=n; p++)
    {
        if(arr[p]==0)
        {
            prime[f] = p;
            //printf("%d ",prime[f]);
            f++;

        }
    }

}
int main()
{

    seive();
    return 0;
}

