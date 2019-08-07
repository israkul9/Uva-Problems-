///bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;
#define n 20000005


//long long int j,f=0,p,prm[n];

bool arr[n];

void seive()
{
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;


    for( int i=4; i<=n; i=i+2)
    {
        arr[i]=1;
    }

    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<=sqrt(n); j=j+i*2)
            {
                arr[j]=1;
            }
        }
    }



}

int main()
{
    seive();

    int num1,num2,sum,ck;
    int test;
    scanf("%d",&test);
    for(int c=1; c<=test; c++)
    {
        ck=0;
        scanf("%d %d",&num1,&num2);
        for(int k=num1; k<=num2; k++)
        {
            sum=0;
            int  temp = k;
            while(temp>0)
            {
                int b = temp % 10;
                sum = sum + b;
                temp = temp/10;
            }
            if(arr[k]==0 && arr[sum]==0)
            {
                ck++;
            }

        }
        printf("%d\n",ck);
    }
    return 0;
}


/// arekta code





#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define MAX 1000000

bool prime[MAX+10];
vector<int>primeList;

int Vsize;

void sieve()
{

    for(int i=4; i<=MAX; i+=2)
        prime[i]=1;
    int srt = sqrt(MAX);
    for(int i=3; i<=srt; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=MAX; j+=2*i)
            {
                prime[j]=1;
            }
        }
    }
    prime[0]=prime[1]=1;


}




int main()
{
    sieve();


    int test,a,b,sum,k,temp;

    scanf("%d",&test);
    for(int d=1; d<=test; ++d)
    {

        scanf("%d%d",&a,&b);

        for(int i=a; i<=b; i++)
        {
            if(prime[i]==0)
            {
                primeList.push_back(i);

            }
        }

        Vsize = primeList.size();

        int  count =0;
        for(int j=0; j<Vsize; j++)
        {
            k=primeList[j];
            sum=0;
            temp = k;
            while(temp>0)
            {
                int b = temp % 10;
                sum = sum + b;
                temp = temp/10;
            }
            if(prime[sum]==0)
                count ++;
        }

        printf("%d\n",count);

        primeList.clear();
    }
    return 0;

}
