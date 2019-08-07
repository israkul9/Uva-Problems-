
///bismillah_hir_rahmanir_rahim



#include<bits/stdc++.h>
using namespace std;
#define max 100000009

bool arr [max]= {0};
long long int prime [max],i,j,f,p;


void siv ()
{

    arr[0]=arr[1]=1;
    arr[2]=0;

    for(i=4; i<=max; i=i+2)
    {
        arr[i]=1;
    }

    for(i=3; i<=sqrt(max); i=i+2)
    {
        if(arr[i]==0)
        {
            for(j=i*i; j<=max; j=j+(2*i))
            {
                arr[j]=1;
            }
        }
    }


    f=0;
    for(p=2; p<=max; p++)
    {
        if(arr[p]==0)
        {

            prime[f]=p;
            //printf("%lld ",prm[f]);
            f++;
        }
    }


}

vector<long long int>PrimeDivisor;

long long int sqrtN;

//int  List[max],listSize;

void primeFactorize ( long long  int n )
{
//   listSize = 0;
    sqrtN =   sqrt(n) ;
    for(  i = 0; prime[i] <= sqrtN; i++ )
    {
        if( n % prime[i] == 0 )
        {


            while( n % prime[i] == 0 )
            {
                n /= prime[i];
//                List[listSize] = prime[i];
//                 listSize++;
                PrimeDivisor.push_back(prime[i]);
            }
        }
    }

    if( n > 1 )
    {
        PrimeDivisor.push_back(n);

//        List [listSize] = n;
//        listSize++;
    }

}



int main()
{
    siv();

    long long  int x,i,temp,count;

    while (scanf("%lld",&x)==1)
    {
        if(x==0)return 0;
        temp = x;


        if(x<0)
        {
            x = fabs(x);
            primeFactorize(x);
            printf("%lld = -1",temp);
            for( i=0; i<PrimeDivisor.size(); ++i)
            {
                printf(" x %lld",PrimeDivisor[i]);
                //printf("%lld ",PrimeDivisor[i]);
            }
            printf("\n");

        }
        else
        {
            primeFactorize(x);
            count = 0;
            printf("%lld =",temp);
            for( i=0; i<PrimeDivisor.size(); ++i)
            {
                printf(" %lld",PrimeDivisor[i]);

                if(count<PrimeDivisor.size()-1)
                {
                    printf(" x");
                    count++;
                }
                //printf("%lld ",PrimeDivisor[i]);
            }
            printf("\n");
        }
        PrimeDivisor.clear();
    }
    return 0;
}

