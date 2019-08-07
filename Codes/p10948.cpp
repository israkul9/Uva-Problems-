#include<bits/stdc++.h>
using namespace std;
#define n 1000000


int  arr[n];

void seive ();



int main ()
{
    seive();


    int x;

    while (1)
    {
        scanf("%d",&x);

        if(x==0) return 0;

        printf("%d:\n",x);

        int d=0;

        for (int i=2; i<=x/2; i++)
        {
            if(arr[i] == 0 && arr[x-i] == 0)

            {
                printf("%d+%d\n",i,x-i);
                d++;

            }
            if (d==1)
                break;
        }
        if (d==0)
        {
            printf("NO WAY!\n");
        }
    }
    return 0;
}



void seive ()
{


    arr[2]=0;
    int sq =  sqrt(n);
    for ( int i=4 ; i<=n; i= i+2)
    {
        arr[i]=1;
    }

    for( int i=3 ; i<=sq; i= i+2)
    {
        if(arr[i] == 0)
        {
            for( int j = i*i ; j<=n ; j=j+(2*i))
            {
                arr[j] =1;
            }
        }
    }


    /*  prm[0]=2;
      for( int p=3; p<=n; p+=2)
      {
          if (arr[p]==0)
          {
              prm[f] = p;
              //printf("%d ",prm[f]);
              f++;
          }
      }
    */

}

