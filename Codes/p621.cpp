#include<bits/stdc++.h>
using namespace std;



int main()
{
    char ch[10000];

    int test,len,j;
    scanf("%d",&test);
    for( j=1; j<=test; j++)
    {
        scanf("%s",ch);

        len = strlen(ch);



        if(strcmp(ch,"1")==0)
        {
            printf("+\n");
        }
        else if(strcmp(ch,"4")==0)
        {
            printf("+\n");
        }
        else if(strcmp(ch,"78")==0)
        {
            printf("+\n");
        }

        else  if(ch[len-1]== '5' && ch[len-2]== '3')
        {
            printf("-\n");
        }
        else if(ch[0]=='1' && ch[1]=='9' && ch[2]=='0')
        {
            printf("?\n");
        }
        else if (ch[0]=='9' && ch[len-1]=='4')
        {
            printf("*\n");
        }

//        else
//        {
//            if(ch[len-1]== '5' || ch[len-2]== '3')
//            {
//                printf("-\n");
//            }
//            else if(ch[0]=='1' || ch[1]=='9' || ch[2]=='0')
//            {
//                printf("?\n");
//            }
//            else if (ch[0]=='9' || ch[len-1]=='4')
//            {
//                printf("*\n");
//            }
//
//        }
    }
    return 0;
}

