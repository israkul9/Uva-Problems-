#include<bits/stdc++.h>
using namespace std;
#define n 10000000


bool arr[n];


void seive ()
{
    arr[2]=0;
    for(int i=4 ; i<=n ; i = i+2)
    {
        arr[i]=1;
    }
    for(int i=3 ; i<=sqrt(n) ; i = i+2)
    {
        if(arr[i] == 0)
        {
            for(int j=i*i ; j<=sqrt(n); j = j + (2*i))
            {
                arr[j]=1;
            }
        }
    }

}



int main()
{


    seive();
    //printf("%d\n",arr[69]);

    char ch [53],t;
    for (int i=1,t='a'; ch[i]<=26,t>='a' && t<='z'; i++,t++)
    {
        ch[i] = t;
        //printf("%c\n",ch[i]);
    }

    for (int i=27,t='A'; ch[i]<=52,t>='A' && t<='Z'; i++,t++)
    {
        ch[i] = t;
        //printf("%c\n",ch[i]);
    }

    char p [22];
    int i,j,ck,sum;
    while (scanf("%s",p)==1)
    {
        sum = 0;
        for(i=0; i[p]; i++)
        {

            ck=0;

            for(j=1; j<=52; j++)
            {
                ck++;
                if(p[i]==ch[j])
                {
                    break;
                }
            }

            sum = sum +ck;
        }
        // printf("%d\n",sum);
        if(arr[sum]==0)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }

    return 0;
}


