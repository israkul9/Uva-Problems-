#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int N,wall[55],low,high,test,j=1;
    scanf("%ld",&test);
    while(j<=test)
    {
        scanf("%ld",&N);
        for(long int i=0; i<N; i++)
        {
            scanf("%ld",&wall[i]);
        }
        low=high=0;
        for(long int t=0; t<N-1; t++)
        {
            if( wall[t+1] > wall[t] )
            {
                high++;
            }
            if (wall[t+1] < wall[t] )

            {
                low++;
            }
        }
        printf("Case %ld: %ld %ld\n",j,high,low);
        j++;
    }

    return 0;
}


