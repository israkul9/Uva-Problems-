
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char s[7];
    int test,len;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        scanf("%s[^\n]",s);
        len=strlen(s);
        if(len==5) printf("3\n");
        else if((s[0]=='t' && s[1]=='w')||(s[0]=='t'&&s[2]=='o')||(s[1]=='w'&&s[2]=='o'))
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }

    }
    return 0;
}
