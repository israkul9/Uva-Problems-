#include<bits/stdc++.h>
using namespace std;


int gcd (int num_1, int num_2)
{
    int gcd;
    for(int i=1 ; i<= num_1 && i<=num_2; i++)
    {
        if(num_1% i== 0 && num_2 %i == 0)
            gcd = i;
    }
    return gcd;
}
int main ()
{
    int a,b,N,g;

    while(1)
    {
        g=0;
        scanf("%d",&N);
        if(N==0)break;
        for(int i =1; i<N; i++)
        {
            for(int j=i+1; j<=N; j++)
            {
                g+=gcd (i,j);
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
















#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

/*
int gcd(int i, int j)
{
    int l,gc;

    for(l=1; l<=i,l<=j; l++)
    {
        if(i%l==0 && j%l==0)
        {
            gc=l;
        }
    }
    return gc;

}
*/
int main()
{
    //int gcd(int,int);
    int a,b,n,d;
    int i,k,j,G;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        G=0;
        for(i=1; i<n; i++)
        {
            for(k=i+1; k<=n; k++)
                G+=__gcd(i,k);
        }
        printf("%d\n",G);
    }
    return 0;
}
















