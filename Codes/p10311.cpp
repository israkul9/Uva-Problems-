#include<bits/stdc++.h>
using namespace std;
#define n 1000
//int i,j,p,f=0,prm[1000];
bool arr[n];


void seive ()
{
    int i,j,sq;


    arr[2]=0;
    sq =  sqrt(n);

    for ( i=4 ; i<=n; i= i+2)
    {
        arr[i]=1;
    }

    for(i=3 ; i<=sq; i= i+2)
    {
        if(arr[i] == 0)
        {
            for( j = i*i ; j<=n ; j=j+(2*i))
            {
                arr[j] =1;
            }
        }
    }


    /* for(p=2; p<=n; p++)
    {
        if(arr[p]==0)
        {
            prm[f]=p;
            printf("%d ",prm[f]);
            f++;
        }
    }*/


}



int main ()
{
    seive();

   // printf("%d",arr[69]);

   /* int x,count,i,j,k;
    while (scanf("%d",&x)!=EOF)
    {
        if(x%2==0)
        {
            k=x/2;
            count =0;
            for ( int i=x/2; i<=x; k--, i++)
            {
                if(arr[i] == 0 && arr[k] == 0)
                {
                    printf("%d is the sum of %d and %d.\n",x,i,k);
                    count ++;

                }

                if(count==1)break;
            }

            if(count == 0)
            {
                printf("%d is not the sum of two primes!\n",x);
            }
        }
        else
        {

            for(i=2; i<=x/2; i++)
            {
                if(arr[i]==0 && arr[x-i]==0)
                {
                    printf("%d is the sum of %d and %d.\n",x,i,x-i);

                    break;
                }
                else
                {
                    printf("%d is not the sum of two primes!\n",x);
                    break;
                }


            }

        }

    }
*/
    return 0;
}
















/*

# include<stdio.h>
# include<math.h>

int arr[100000000];
int abc(int a)
{
    int i,k,h,s,d,f,j;
    h=sqrt(a);
    k=0;
    arr[2]=1;
    for(i=3; i<=a; i++)
    {
        if(i%2==0)
            arr[i]=0;
        else
            arr[i]=1;
    }
    for(i=3; i<=h; i++)
    {
        if(arr[i]!=0)
        {
            for(j=i*i; j<=a; j+=i*2)
                arr[j]=0;
        }

    }
    /*for(i=2; i<=a; i++)
    {
        if(arr[i]==1)
            arr[k++]=i;
    }
}
int main()
{
    int i,j,k,l,a,b,c,n;
    a=0;
    l=0;
    abc(100000000);
    //printf("%d",arr[743]);
    while(scanf("%d",&n)==1)
    {
        b=0;
        if(n%2==0)
        {
            for(i=n/2+1; i<=n; i++)
                if(arr[i]==1&&arr[n-i]==1)
                {
                    printf("%d is the sum of %d and %d.\n",n,n-i,i);
                    b=1;
                    break;
                }
            if(b==0)
                printf("%d is not the sum of two primes!\n",n);
        }
        else
        {
            if(arr[2]==1 && arr[n-2]==1)
                printf("%d is the sum of 2 and %d.\n",n,n-2);
            else
                printf("%d is not the sum of two primes!\n",n);
        }
    }
    return 0;
}
*/
