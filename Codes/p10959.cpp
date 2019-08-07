//Bismillah_hir_rahmanir_rahim
#include<bits/stdc++.h>

#define WHITE 1
#define GRAY 2
#define BLACK 3


int adj[1000][1000];
int color[1000];
int dis[1000];
//int parent[100];

using namespace std;

int node, edge;

void bfs (int Starting_Node)
{
    for(int i=0; i<node; i++)
    {
        color[i]=WHITE;
        dis[i]= INT_MIN ;
        /// INT_MIN er value hocche 2147483648
        //parent[i]=-1;
    }//
    dis[Starting_Node]=0;
    // parent[Starting_Node]=-1;
    queue<int>q;
    q.push(Starting_Node);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        color[x] = GRAY;
        //printf("%d ",x);
        for (int i=0; i<node; ++i)
        {
            if(adj[x][i]==1 && color[i]==WHITE)
            {
                /// x er neughbour hocche i
                /// ekhane  x no node hocche i er parent
                color[i] = GRAY;
                dis[i] = dis[x]+1 ;
                //parent[i]=x;
                q.push(i);
            }
        }
        color[x]=BLACK;
    }
}


int main()
{
    //freopen("input.txt","r",stdin);///file theke input nei

    int test;
    scanf("%d\n",&test);

    for(int x=1; x<=test; x++)
    {

        scanf("%d",&node);///number of node input nei
        scanf("%d",&edge);///number of egge input nei

        for (int i=0; i<edge; i++)
        {
            int n1,n2;
            scanf("%d %d",&n1,&n2);
            adj[n1][n2]=1;
            adj[n2][n1]=1;
            /// graph tike undirect mone kori
        }
        bfs(0);
        //cout<<endl;

        for(int i=1; i<node; i++)
        {
            printf("%d\n",dis[i]);
        }
        if(x!=test)
        {

            printf("\n");
        }

        for(int i=0; i<1000; i++)
        {
            for(int j=0; j<1000; j++)
            {
                adj[i][j]=0;
            }
        }
        memset(dis,0,sizeof(dis));

        memset(color,0,sizeof(color));


    }
    //printf("%d\n",dis[10]);
    return 0;

}

