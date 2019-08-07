//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;


int i,j;
int item;
const int M = 1005;
int price[M];
int weight[M];
int KnapsackSize;

vector<int>result;


int Knap(int W)
{

    int data[item+1][W+1];
    memset(data,false,sizeof(data));
    for(i=0; i<=W; i++)
    {
        data[0][i]=0;
    }

    for(j=1; j<=item; j++)
    {
        data[j][0]=0;
    }

    for(i=1; i<=item; i++)
    {
        for(j=1; j<=W; j++)
        {
            if(weight[i]>j)
            {
                data[i][j] = data[i-1][j];
            }
            else
            {

                int  index = abs(j - weight[i]);
                int  value = data[i-1][index];
                int sum = value + price[i];
                int up_index = data[i-1][j];
                data[i][j] = max(sum,up_index);


            }
        }
    }
    return data[item][W];



}

int main()
{
    int test;
    scanf("%d",&test);

    while(test--)
    {

        scanf("%d",&item);
        for(i=1; i<=item; ++i)
        {
            scanf("%d",&price[i]);
            scanf("%d",&weight[i]);
        }
        int G,ans;

        scanf("%d",&G);
        for(int st=1; st<=G; st++)
        {
            scanf("%d",&KnapsackSize);
            ans = Knap(KnapsackSize);
            result.push_back(ans);

            ans = 0;

        }

        int t = accumulate(result.begin(),result.end(),0);
        printf("%d\n",t);
        result.clear();
        memset(price,false,sizeof(price));
        memset(weight,false,sizeof(weight));


    }

    return 0;
}
