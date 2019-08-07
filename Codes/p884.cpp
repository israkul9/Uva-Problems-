

///bismillah_hir_rahmanir_rahim

///verdict-TLE

#include<bits/stdc++.h>
using namespace std;
#define max 1000000

int  arr [max]= {0};
int prime [max],i,j,p,f,x;


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

//
//int factors(int num)
//{
//    int i,tmp,cnt,sum=0;
//
//    for(i=0; i<f && prime[i]<=num; i++)
//    {
//        cnt=0;
//        tmp=num;
//        //cout<< prime[i] << " ";
//        while(tmp>0)
//        {
//            cnt = cnt + floor(tmp/prime[i]);
//            tmp=tmp/prime[i];
//        }
//        sum = sum + cnt;
//        //cout<< cnt << endl;
//    }
//
//}


int main()
{
    siv();

    int i,tmp,cnt,sum,input,num;

    while (scanf("%d",&input)!=EOF)
    {
        sum =0;
        num=input;

        for(i=0; i<f && prime[i]<=num; i++)
        {
            cnt=0;
            tmp=num;
            //cout<< prime[i] << " ";
            while(tmp>0)
            {
                cnt = cnt + floor(tmp/prime[i]);
                tmp=tmp/prime[i];
            }
            sum = sum + cnt;
            //cout<< cnt << endl;
        }
        printf("%d\n",sum);
    }

    return 0;
}
