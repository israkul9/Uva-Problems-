

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,sum;
    cout << "PERFECTION OUTPUT" << '\n';
    while (scanf("%d",&n)==1)
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            sum=0;
            for (i=1; i<n; i++)
            {
                if(n%i==0)
                    sum = sum+i;
            }
            if(sum==n)
                printf("%5d  PERFECT\n",n);
            else if(sum > n)
                printf("%5d  ABUNDANT\n",n);
            else
                printf("%5d  DEFICIENT\n",n);
        }
    }
    return 0;
}
