#include<bits/stdc++.h>
using namespace std;
int main ()

{
    int a[13],i,j,ck;
    int test;
    scanf("%d",&test);
    printf("Lumberjacks:\n");
    for(int f=1; f<=test; f++)
    {
        for(i=0; i<10; i++)
        {
            scanf("%d",&a[i]);
        }
        ck=0;

        for(i=0; i<10; i++)
        {
            if(a[i]>a[i+1])
            {
                ck++;
            }

        }
        if(ck==0 || ck==9)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }

    }

    return 0;
}
