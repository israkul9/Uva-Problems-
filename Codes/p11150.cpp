#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,i,n;
    while(scanf("%d",&n)!=EOF)
    {
        a=n;
        while(n>=3)
        {
            a=a+(n/3);
            n=(n/3)+(n%3);
        }
        if(n%2==0)
        {
            a++;
        }
        printf("%d\n",a);
    }

    return 0;
}
