//bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double length,width,depth,weight,ck,sum,result=0;
    int test;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        scanf("%lf %lf %lf %lf",&length,&width,&depth,&weight);
        sum = (length + width +depth);
        ck=0;
        if( length<=56 && width <=45 && depth<=25&& weight<=7 ||sum<=125 && weight <=7)
        {
            ck=ck+1;
        }
        printf("%.0lf\n",ck);
        result=result+ck;
    }
    printf("%.0lf\n",result);
    return 0;
}
