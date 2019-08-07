#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,reminder,arr[100];
    while(scanf("%lld",&n)==1)
    {
        if(n<0)break;
        reminder=0;
        long long int j=0;
        while(n>0)
        {
            reminder = (n%3);
            arr[j]=reminder;
            n = n/3;
            j = j+1;
        }
        if(j==0)
        {
            printf("0");
        }
        for(long long int t=j-1; t>=0; t--)
        {
            printf("%lld",arr[t]);
        }
        printf("\n");
    }
    return 0;
}
