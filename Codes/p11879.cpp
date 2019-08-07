#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char s[105];
    int len,reminder,sum;
    while(gets(s))
    {
        if(s[0]=='0')
        {
            break;
        }
        len=strlen(s);
        reminder=0;
        for(int i=0; i<len; i++)
        {
            sum=reminder*10+(s[i]-48);
            reminder=sum%17;
        }
        printf("%d\n",sum);

        if(reminder==0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}

