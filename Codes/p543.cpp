///bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int num,k,remark,j,arr[112345],ck,m,n,f;
    while(scanf("%ld",&n)==1)
    {
        ck=0;
        j=0;
        if (n==0) break;
        for(num=2; num<=n; num++)
        {
            remark=1;
            for(k=2; k<=num/2; k++)
            {
                if(num % k == 0)
                {
                    remark=0;
                    break;
                }
            }
            if(remark==1)
            {
                arr[j]=num;
                j++;
                ck++;
            }
        }
        f=0;

        for(int i=0; i<ck; i++)
        {
            for( m=i+1; m<ck; m++)
            {
                if(arr[i]+arr[m]==n)
                {
                    printf("%ld = %ld + %ld\n",n,arr[i],arr[m]);
                    f++;
                }

            }
            if(f==1)
            {
                break;
            }
        }
        if(f==0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }

    }

    return 0;
}
