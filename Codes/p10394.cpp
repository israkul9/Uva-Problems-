
///bismillah_hir_rahmanir_rahim


///Uva-Twin primes


#include<bits/stdc++.h>
using namespace std;
#define n 20000005


long long int prm[n];
bool arr[n];

void seive()

{
    long long int num,k,j,f=1;
    arr[0]=1;
    arr[1]=1;
    prm[2]=0;

    for(long long int i=4; i<=n; i=i+2)
    {
        arr[i]=1;
    }
    for(long long int i=3; i<=sqrt(n); i+=2)
    {
        if(arr[i]==0)
        {
            for(long long int j=i*i; j<=n; j=j+i*2)
            {
                arr[j]=1;
            }
        }
    }

    for(long long int p=3; p<=n; p=p+2)
    {
        if(arr[p]==0 && arr[p+2]==0)
        {
            prm[f]=p;
            f++;
        }
    }
}

int main()
{
    long long int t ;

    seive();
    while (cin>>t)
    {
        //printf("(%lld, %lld)\n",prm[t],prm[t]+2);
        cout<<"("<<prm[t]<<", "<<prm[t]+2<<")"<<endl;
    }

    return 0;
}
