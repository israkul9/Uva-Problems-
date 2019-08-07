#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,r,test;
    float z;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        scanf("%d%d%d",&x,&y,&r);
        z=sqrt((x*x)+(y*y));
        printf("%.2f %.2f\n",r-z,r+z);
    }
    return 0;
}
