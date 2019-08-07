#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,avg,grade,T,i=1;
    scanf("%d",&T);
    if(T<100)
    {
        while(i<=T)
        {
            scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
            if(e>=g && f>=g)
                avg=(e+f)/2;
            else if(f>=e && g>=e)
                avg=(f+g)/2;
            else if(g>=f && e>=f)
                avg=(g+e)/2;
            grade=a+b+c+d+avg;
            if(grade>=90)
                printf("Case %d: A\n",i);
            else if(grade>=80 && grade<90)
                printf("Case %d: B\n",i);
            else if(grade>=70 && grade<80)
                printf("Case %d: C\n",i);
            else if(grade>=60 && grade<70)
                printf("Case %d: D\n",i);
            else if(grade<60)
                printf("Case %d: F\n",i);
            i++;
        }
    }
    return 0;
}

