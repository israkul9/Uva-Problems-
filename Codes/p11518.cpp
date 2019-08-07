//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
#define SIZE 10000


using namespace std;

long long int mat[SIZE][SIZE];

bool visited[SIZE];

long long int node,edge,query;

void dfs_visit (long long int n)
{

    visited[n] = true;
    for(long long int i=1; i<=node; i++)
    {
        if(mat[n][i] == 1 && visited[i] == false)
        {
            dfs_visit(i);

        }
    }

}


int main()
{

    long long int test;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld %lld",&node,&edge);
        scanf("%lld",&query);


        for(long long int i=1; i<=node; i++)
        {
            visited[i] = false;
        }


        for(long long int i=1; i<=edge; ++i)
        {
            long long int a,b;
            scanf("%lld %lld",&a,&b);
            mat[a][b] = 1;
            mat[b][a] = 1;
        }
        while(query--)
        {

            long long int value;
            scanf("%lld",&value);
            dfs_visit(value);

            long long int cnt = 0;
            for(long long int j=1; j<=node; j++)
            {
                if(visited[j] == true)
                {
                    cnt++;
                }
            }
            printf("%lld\n",cnt-1);

        }
        memset(visited,false,sizeof(visited));

    }

    return 0;
}

