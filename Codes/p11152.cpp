#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main ()
{
    double a,b,c,sunflowers,t_area,t,radius_of_red_circle,s,roses,violets;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        t_area=sqrt(s*(s-a)*(s-b)*(s-c));
        t=(a*b*c)/(4*t_area);
        sunflowers=(PI*t*t)-(t_area);
        radius_of_red_circle=(t_area/s);
        roses=(PI*radius_of_red_circle*radius_of_red_circle);
        violets=(t_area-roses);
        printf("%.4lf %.4lf %.4lf\n",sunflowers,violets,roses);
    }

    return 0;
}
