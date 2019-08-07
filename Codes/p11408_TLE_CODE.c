

///bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
#define MAX 5000000
using namespace std;

bool arr[MAX];
int i,j;
int sq = sqrt(MAX);


void seive()
{
    arr[1]=arr[0]=1;
    arr[2]=0;
    for(i=4; i<=MAX; i=i+2)
    {
        arr[i]=1;
    }
    for(i=3; i<=sq; i=i+2)
    {
        if(arr[i]==0)
        {
            for(j=i*i; j<=MAX; j=j+(2*i))
            {
                arr[j]=1;
            }
        }
    }
//    for(p=2; p<=MAX; p++)
//    {
//        if(arr[p]==0)
//        {
//            prm[f]=p;
//            printf("%d ",prm[f]);
//            f++;
//        }
//    }
}

vector<int>divisor;


int main()
{
    seive();


    int n,count,t,a,b;
    while (true)
    {
        count = 0;
        scanf("%d",&a);
        if(a==0)return 0;
        scanf("%d",&b);
        for(t=a; t<=b; t++)
        {
            n=t;

            for(int i=1; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    divisor.push_back(i);
                    if(i*i!=n)
                    {
                        divisor.push_back(n/i);
                    }
                }
            }
            int sum = 0;
            //sort( divisor.begin(),divisor.end() );

            for(int j=0; j<divisor.size(); j++)
            {
                if(arr[divisor[j]]==0)
                    sum = sum + divisor[j];
            }
            if(arr[sum]==0)
            {
                count++;
            }

            divisor.clear();
        }
        printf("%d\n",count);
    }
    return 0;
}

