#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i=1;
    while(i<=10)
    {
        if(n>=1 && n<=100)

            scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            n=n/2;
        }
        printf("%d\n",n);

    }
    return 0;
}




