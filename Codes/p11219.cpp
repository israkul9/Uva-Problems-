#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,m1,y1,d2,m2,y2,age;
    scanf("%d%d%d",&d1,&m1,&y1);
    scanf("%d%d%d",&d2,&m2,&y2);
    if(m1<m2 && y1>=y2)
    {
        printf("Invalid birth date\n");
    }
    else if(y1-y2>130)
    {
        printf("Check birth date\n");
    }
    else {
        printf("%d\n",y1-y2);
    }

    //wrong
        return 0;
}
