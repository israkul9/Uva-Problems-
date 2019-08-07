#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a)==1 && a!=0)
    {
        if(a>100)
            b=a-10;
        else
        printf("f91(%d) = 91\n",a);
    }
    return 0;
}
