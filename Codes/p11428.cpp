/// wrong output in some cases


#include<bits/stdc++.h>

using namespace std;


int main ()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    for(b=1;; b++)
    {
        if(n==0) break;
        a=b+1;
        c=pow(a,3);
        d=pow(b,3);
        if((c-d)== n)
        {
            printf("%d %d\n",a,b);
            break;
        }
        else
        {
            printf("No solution\n");
            break;
        }
    }

    return 0;
}
