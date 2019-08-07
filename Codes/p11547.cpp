
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int ans,t,n,i;
    scanf("%ld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%ld",&n);
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n/=10;
        ans=n%10;
        if(ans<0)
            ans*=(-1);
        printf("%ld\n",ans);
    }
    return 0;
}
