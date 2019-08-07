
#include<bits/stdc++.h>
using namespace std;

int arr[10000000];
//int prm[1000000];

void seive ()

{


    for(int i=4; i<=10000000; i+=2)
    {
        arr[i]=1;
    }
    for(int i=3; i<=sqrt(10000000); i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<=10000000; j=j+2*i)
            {
                arr[j]=1;
            }
        }
    }


    arr[0]=1;
    arr[1]=1;
    arr[2]=0;
    /* int f=0;
     for(int p=2; p<=1000000; p++)
     {
         if(arr[p] ==0)
         {
             prm[f]=p;
             printf("%d ",prm[f]);
             f++;
         }
     }*/
}



int main()
{
    seive();


    int n,ck;
    while (scanf("%d",&n)==1 && n>0)
    {
        ck=0;
        for(int i=2; i<=n; i++)
        {
            if(n%i==0 && arr[i]==0)
            {
                //printf("%d \n",i);
                ck++;
            }
        }
        printf("%d : %d\n",n,ck);
    }
    return 0;
}

