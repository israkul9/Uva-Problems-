
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test,a,b,i;
    scanf("%d",&test);
    for ( int i=1; i<=test; i++)
    {
        scanf("%d%d",&a,&b);
        if (a>b)
        {
            printf(">\n");
        }
        else if (a<b)
        {
            printf("<\n");
        }
        else
        {
            printf ("=\n");
        }
    }
    return 0;
}
