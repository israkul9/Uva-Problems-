//bismillah_hir_rahmanir_rahim

///SMS typing : UVa 11530

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int ck,i,n,k;
    char ch[108];
    while(scanf("%d",&n)==1)
    {
        for(k=0; k<=n; k++)
        {
            gets(ch);
            ck=0;
            //len=strlen(ch);
            for(i=0; ch[i]; i++)
            {

                if(ch[i]=='a')
                {
                    ck=ck+1;
                }
                else  if(ch[i]==' ')
                {
                    ck=ck+1;
                }
                else  if(ch[i]=='b')
                {
                    ck=ck+2;
                }
                else  if(ch[i]=='c')
                {
                    ck=ck+3;
                }
                else  if(ch[i]=='d')
                {
                    ck=ck+1;
                }
                else  if(ch[i]=='e')
                {
                    ck=ck+2;
                }
                else  if(ch[i]=='f')
                {
                    ck=ck+3;
                }
                else  if(ch[i]=='g')
                {
                    ck=ck+1;
                }
                else  if(ch[i]=='h')
                {
                    ck=ck+2;
                }
                else  if(ch[i]=='i')
                {
                    ck=ck+3;
                }
                else  if(ch[i]=='j')
                {
                    ck=ck+1;
                }
                else  if(ch[i]=='k')
                {
                    ck=ck+2;
                }
                else  if(ch[i]=='l')
                {
                    ck=ck+3;
                }
                else  if(ch[i]=='m')
                {
                    ck=ck+1;
                }
                else  if(ch[i]=='n')
                {
                    ck=ck+2;
                }
                else  if(ch[i]=='o')
                {
                    ck=ck+3;
                }
                else  if(ch[i]=='p')
                {
                    ck=ck+1;
                }
                else  if(ch[i]=='q')
                {
                    ck=ck+2;
                }
                else  if(ch[i]=='r')
                {
                    ck=ck+3;
                }
                else  if(ch[i]=='s')
                {
                    ck=ck+4;
                }
                else  if(ch[i]=='t')
                {
                    ck=ck+1;
                }
                else  if(ch[i]=='u')
                {
                    ck=ck+2;
                }
                else  if(ch[i]=='v')
                {
                    ck=ck+3;
                }
                else  if(ch[i]=='w')
                {
                    ck=ck+1;
                }
                else  if(ch[i]=='x')
                {
                    ck=ck+2;
                }
                else  if(ch[i]=='y')
                {
                    ck=ck+3;
                }
                else  if(ch[i]=='z')
                {
                    ck=ck+4;
                }

            }
            if(k!=0)
                printf("Case #%d: %d\n",k,ck);
        }
    }

    return 0;
}

