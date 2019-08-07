#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int X,Y,Z,T,i;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d",&X,&Y,&Z);
        printf("case %d:",i);
        if(X>1000 || X<10000)
        {
            if(Y>1000 || Y<10000)
            {
                if (Z>1000 || Z<10000)
                {

                    if(X<Y && X>Z || X>Y && X<Z)

                        printf("%d\n",X);

                    else if (Y<X && Y>Z || Y>X && Y<Z )

                        printf("%d\n",Y);

                    else

                        printf("%d\n",Z);



                }
            }
        }



    }


    return 0;
}
