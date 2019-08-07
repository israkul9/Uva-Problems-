1#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char s[1115];
    int len,reminder,sum;
    while(gets(s))
    {
        len = strlen(s);
        if(strcmp(s,"0")==0)
        {
            break;
        }
        reminder=0;
        for(int i=0; i<len; i++)
        {
            sum=reminder*10+(s[i]-48);
            reminder=sum%11;
        }
        if(reminder==0)
            printf("%s is a multiple of 11.\n",s);
        else
        {
            printf("%s is not a multiple of 11.\n",s);
        }
    }
    return 0;
}



