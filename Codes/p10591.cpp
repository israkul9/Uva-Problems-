///bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum,d,test,t=1;
    scanf("%d",&test);

    while (t<=test)
    {
        scanf("%d",&n);
        d=n;
        while(1)
        {
            sum=0;
            while(n>=1)
            {
                a=n%10;
                n=n/10;
                sum = sum + (a*a);
            }
            if(sum==1)
            {
                printf("Case #%d: %d is a Happy number.\n",t,d);
                break;
            }
            else if(sum==d)
            {
                printf("Case #%d: %d is an Unhappy number.\n",t,d);
                break;
            }
            n=sum;
            //sum=0;
        }
        t++;

    }
    return 0;
}
