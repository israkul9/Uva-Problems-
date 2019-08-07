#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double N,A,sum,i;
    scanf("%lf%lf",&N,&A);
    sum=0;
    for(i=1; i<=N; i++)
    {
        sum = sum + (i*pow(A,i));
    }
    printf("%.0lf\n",sum);
    return 0;
}
///string use korte hobe big input neyar jonno
