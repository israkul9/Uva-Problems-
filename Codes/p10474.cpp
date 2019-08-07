//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;

vector<int>marbell;
vector<int>::iterator low;

int main()
{

    int i,j,N,query,value,item,test=1;

    while(true)
    {

        scanf("%d",&N);
        scanf("%d",&query);

        if(N==0 && query==0)
        {
            break;
        }

        for(i=0; i<N; i++)
        {
            scanf("%d",&value);
            marbell.push_back(value);
        }
        sort(marbell.begin(),marbell.end());
        printf("CASE# %d:\n",test);
        for(j=0; j<query; j++)
        {
            scanf("%d",&item);

            if(binary_search(marbell.begin(),marbell.end(),item))
            {

                low = lower_bound(marbell.begin(),marbell.end(),item);

                printf("%d found at %d\n",item,low-marbell.begin()+1);
            }
            else
            {

                printf("%d not found\n",item);

            }

        }
        test++;
        marbell.clear();
    }
    return 0;
}

