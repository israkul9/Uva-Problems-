
#include<bits/stdc++.h>
using namespace std;
#define n 2000000


bool arr[n];
int prime[n],f=0;

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

    for (int p=2; p<=n; p++)
    {
        if(arr[p]==0)
        {
            prime[f] = p;
            //printf("%d ",prime[f]);
            f++;

        }
    }

}
int main()
{
    seive();
    int x,temp,num1,num2;
    int test;
    scanf("%d",&test);
    for(int p=1; p<=test; p++)
    {
        scanf("%d%d",&num1,&num2);
        //cin>>x ;

        int d=0;
        temp=0;
        for(int t=num1; t<=num2; t++)
        {
            x=t;

            int  div=1;

            for (int i=0 ; i<=sqrt(f)+1; i++)
            {
                int count = 1;
                while (x % prime[i] == 0 )
                {
                    count ++;
                    x = x / prime[i];
                }


                div =  div*count;

                if(div>d)
                {

                    temp = t;
                    //printf("%d\n",t);
                    d = div;

                }

            }
        }

        // cout<<temp<<endl;

        // printf("%d\n",d);
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",num1,num2,temp,d);
    }

    return 0;
}




