
#include<bits/stdc++.h>
using namespace std;


bool arr[1000000];
long long int i,j,p;
long long int isPrime[1000000],f=1;


vector<long long int>odd;
vector<long long int>even;


void seive ()
{
    for(i=4; i<=1000; i=i+2) arr[i] =1;
    for(i=3; i<=sqrt(1000); i=i+2)
    {
        if(arr[i] == 0)
        {
            for(j=i*i ; j<=1000; j=j+(2*i))
                arr[j] = 1;
        }
    }
    arr[1]=0;///considering 1 as a prime number
}


int main ()
{
    seive();


    long long  int N,C,ls=0,center,k;

    scanf("%lld %lld",&N,&C);

    for(i=1; i<=N; i++)
    {
        if(arr[i]==0)
        {
            isPrime[f]=i;
           // printf("%d \n",isPrime[f]);
            f++;
            ls++;
        }
    }
 // printf("%lld ",ls);
  if(ls%2==0 )
    {
        k=2*C;
    }
    else
    {
        k=2*C-1;
    }

    if(k>=ls)
    {
        printf("%lld %lld: ",N,C);
        for( i=1; i<=N; i++)
        {
            if(arr[i] == 0)
                printf("%lld ",i);
        }
        printf("\n");
    }




    else  if ( ls%2!=0 ) ///when the length of list is odd
    {
        long long int  v=C;
        center = (ls/2)+1;

        C = 2*C-1;//total 3 ghor

        long long   int ck_left= 1;

        while (1)
        {
            //printf("%d",isPrime[center-ck_left]);
            odd.push_back(isPrime[center-ck_left]);
            // printf(" ");
            if(ck_left == (C-1)/2 )break;
            ck_left++;
        }
        odd.push_back(isPrime[center]);
        // printf("%d ",isPrime[center]);

        long long int ck_right = 1;

        while(1)
        {
            odd.push_back(isPrime[center+ck_right]);
            // printf("%d ",isPrime[center+ck_right]);
            if(ck_right == (C-1)/2 )break;
            ck_right++;
        }

        sort(odd.begin(),odd.end());
        printf("%lld %lld: ",N,v);

        for(  long long int y=0; y<odd.size(); y++)
        {
            printf("%lld ",odd[y]);
        }
        odd.clear();
        printf("\n");

    }


    else///when list is even
    {
        center = ls/2;
        long long int center_2 = (ls/2)+1;
        long long int g=C;
        C = 2*C;

        long long int ck_left = 1;

        while(1)
        {
            even.push_back(isPrime[center-ck_left]);
            // printf("%d",isPrime[center-ck_left]) ;
            // printf(" ");
            if((C-2)/2 == ck_left) break;
            ck_left++;
        }
        // printf("%d ",isPrime[center]);
        even.push_back(isPrime[center]);
        // printf("%d ",isPrime[center_2]);
        even.push_back(isPrime[center_2]);

        long long int ck_right = 1;

        while (1)
        {
            even.push_back(isPrime[center_2+ck_right]);
            //printf("%d ",isPrime[center_2+ck_right]);
            if(ck_right == (C-2)/2 )break;
            ck_right++;
        }

        sort(even.begin(),even.end());

        printf("%lld %lld: ",N,g);

        for(int x=0; x<even.size(); x++)
        {
            printf("%lld ",even[x]);
        }
        even.clear();
        printf("\n");
    }

    return 0;
}
