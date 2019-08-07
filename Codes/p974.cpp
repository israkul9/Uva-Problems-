#include<bits/stdc++.h>
using namespace std;

vector< int>numbers;

int main()
{
    int number,sqr,reminder,result,j,i,a,b,test,x,ck,t;

    scanf("%d",&test);

    for(x=1; x<=test; x++)
    {
        ck=0;

        scanf("%d %d",&a,&b);

        for( j=a; j<=b; j++)
        {

            number = j;
            sqr = (j*j);

            for( i=10 ;  ; i=i*10)
            {
                reminder = sqr%i;
                result = sqr/i;

                if(reminder > 0 && result >0)
                {
                    if( reminder + result == number)
                    {
                        ck++;
                        numbers.push_back(number);
                    }
                }
                if(result == false)///   or    result == 0     or      (!result)
                {
                    break;
                }
            }
        }
        if(ck == false )
        {
            printf("case #%d\n",x);
            printf("no kaprekar numbers\n");
            printf("\n");
        }
        else
        {
            printf("case #%d\n",x);
            for( t=0; t<numbers.size(); t++)
            {
                printf("%d\n",numbers[t]);
            }
            printf("\n");
        }
        numbers.clear();
    }
    return 0;
}

