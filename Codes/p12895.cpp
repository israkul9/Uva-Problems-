
///bismillah_hir_rahmanir_rahim



#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,d,x,temp,tusher;

    int test;
    scanf("%d",&test);
    for(int q=1; q<=test; q++)
    {
        long long int count = 0;
        scanf("%lld",&n);
        tusher =n;
        x = n;
        while(n!=0)
        {
            d = n%10;
            n = n/10;
            count ++;
            //if(n>=1 && n<=9) break;
        }

        long long int   t=0,a[count],i,sum=0;

        while (x!=0)
        {
            temp = x%10;

            a[t]=temp;
            long long int sum1=1;

            for(long long int i=1,j=a[t]; i<=count; i++)

            {
                sum1*=j;
            }

            sum =  sum + sum1;
            x = x/10;
            t++;

        }


        if(sum == tusher)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }

    }
    return 0;
}
