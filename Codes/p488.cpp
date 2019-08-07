
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,frequency,amplitude,test,m,t;
    scanf("%d",&test);
    for( m=1 ; m<=test; m++)
    {
        scanf("%d%d",&amplitude,&frequency);
        for(t=1; t<=frequency; t++)
        {
            for(i=1; i<=amplitude; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(j=amplitude-1; j>=1; j--)
            {
                for(i=1; i<=j; i++)
                {
                    printf("%d",j);
                }
                if(m==test && t==frequency && j==1 )
                {
                    break;

                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
