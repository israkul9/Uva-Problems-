#include<bits/stdc++.h>
using namespace std;
#define num 2000

long long int i,j,p,f=0,prm[20000];
bool arr[num];


void seive ()
{
    int i,j,sq;


    arr[2]=0;
    sq =  sqrt(num);

    for ( i=4 ; i<=num; i= i+2)
    {
        arr[i]=1;
    }

    for(i=3 ; i<=sq; i= i+2)
    {
        if(arr[i] == 0)
        {
            for( j = i*i ; j<=num ; j=j+(2*i))
            {
                arr[j] =1;
            }
        }
    }

//
//    for(p=2; p<=num; p++)
//    {
//        if(arr[p]==0)
//        {
//            prm[f]=p;
//            printf("%d ",prm[f]);
//            f++;
//        }
//    }


}

int main()
{
    seive();


    long long int n,m,x,perfect;


    while (1)
    {
        scanf("%lld",&n);
        if(n==0)break;

//        if(n == 0)break;
//        int prove = 0;
//        for(int i = 2; i <= sqrt(n); i++){
//            if(n%i == 0)
//            {
//                prove = 1;
//                break;
//            }
//        }


        if(arr[n] == 0 )
        {
            if (n==2 || n==3 || n==5 ||n==7 || n==13 || n==17 || n==19 || n==31)
            {
                m = pow(2,n-1);
                x = pow(2,n)-1;
                perfect = m*x;
                printf("Perfect: %lld!\n",perfect);
            }
            else
                printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else
        {
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }

    return 0;
}

