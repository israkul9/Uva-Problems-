///bismillah_hir_rahmanir_rahim



#include<bits/stdc++.h>
using namespace std;

long long int num,k,remark,j,ck,m,n,f;
bool arr[1000010];
long long int prm[1000010];
long long int p;
int r=sqrt(1000000)+1;
void siv()
{

//r=sqrt(1000000);
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;

    for(long long int i=4; i<=1000000; i=i+2)
    {
        arr[i]=1;
    }
    for(long long int i=3; i<=r; i+=2)
    {
        if(arr[i]==0)
        {
            for(long long int j=i*i; j<=1000000; j=j+i*2)
            {
                arr[j]=1;
            }
        }
    }

  /*  long long int i=1;
    for(p=2; p<=1000000; p=p+1)
    {
        if(arr[p]==0)
        {
            prm[i++]=p;
            //tlprm++;
        }
    }*/
}

int main()
{
    siv();
    while(scanf("%lld",&n)==1)
    {
        j=0;
        if (n==0) break;

        f=0;
        for(long long int i=2; i<=n/2; i++)
        {
            if(arr[i]==0 && arr[n-i] ==0)
            {
                {
                    printf("%lld = %lld + %lld\n",n,i,n-i);
                    f++;
                    //break;
                }

                if(f==1)break;
            }
        }
        if(f==0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }

    }

    return 0;
}

