//bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;

int main()
{

    long  int a,b,c,i,n,arr[5005],j;
    scanf("%ld",&n);
    a=0,b=1,j=0;
    for(i=2; i<=n; i++,j++)
    {
        c=a+b;
        a=b;
        b=c;
        arr[j]=b;
    }

    return 0;
}
