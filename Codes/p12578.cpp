#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int T;
    double r,c_area,L,W,g_area,total_area;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%lf",&L);
        r=(L/5);
        c_area=pi*r*r;
        W=r*3;
        total_area=(W*L);
        g_area=(total_area-c_area);
        printf("%.2lf %.2lf\n",c_area,g_area);
    }



    return 0;
}


