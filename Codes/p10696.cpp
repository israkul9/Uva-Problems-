#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int N,i;
    for(i=1; i<=250000; i++)
    {
        scanf("%ld",&N);
        if (N==0)
        {
            break;
        }
        else if(N<=100)
        {
            printf("f91(%ld) = 91\n",N);
        }
        else
        {
            printf("f91(%ld) = %ld\n",N,N-10);
        }
    }
    return 0;
}
