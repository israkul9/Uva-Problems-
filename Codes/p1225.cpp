#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int k,n,t,test;
    scanf("%d",&test);
    for(int N=1; N<=test; N++)
    {
        scanf("%d",&n);
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
        for(k=1; k<=n; k++)
        {
            t=k;
            while (1)
            {
                if(t%10==0)a++;
                else if(t%10==1)b++;
                else if(t%10==2)c++;
                else if(t%10==3)d++;
                else if(t%10==4)e++;
                else if(t%10==5)f++;
                else if(t%10==6)g++;
                else if(t%10==7)h++;
                else if(t%10==8)i++;
                else if(t%10==9)j++;
                t=t/10;
                if(t==0)break;
            }

        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j);
    }
    return 0;
}
