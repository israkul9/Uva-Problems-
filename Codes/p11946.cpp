//Bismillah_hir_rahmanir_rahim

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char line[1000];
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        while(gets(line))
        {
            if(strlen(line)==0)
            {
               return 0 ;
            }
            for(j=0; line[j]!='\0'; j++)
            {
                if(line[j]=='3')
                {
                    line[j]='E';
                }
                if(line[j]=='1')
                {
                    line[j]='I';
                }
                else if(line[j]=='4')
                {
                    line[j]='A';
                }
                else if(line[j]=='9')
                {
                    line[j]='P';
                }
                else if(line[j]=='8')
                {
                    line[j]='B';
                }
                else if(line[j]=='5')
                {
                    line[j]='S';
                }
                else if(line[j]=='7')
                {
                    line[j]='T';
                }
                else if(line[j]=='2')
                {
                    line[j]='Z';
                }
                else if(line[j]=='6')
                {
                    line[j]='G';
                }
                else if(line[j]=='0')
                {
                    line[j]='O';
                }
                printf("%c",line[j]);
            }
            printf("\n");
        }
        if(i!=n)
        {
            printf("\n");
        }
    }
    return 0;
}

