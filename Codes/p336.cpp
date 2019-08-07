
//Bissmillah_hir_rahmanir_rahim

#include<bits/stdc++.h>


#define WHITE 1
#define GREY 2
#define BLACK 3
#define SZ 100000

using namespace std;


int mat[SZ][SZ];
int dis[SZ];
int color[SZ];
int node, edge, i,j,test = 1,current,ck;


set<  int >s;
set< int > :: iterator it;

vector< int >v;

void bfs( int source)
{
    for(i=0; i<v.size(); i++)
    {
        dis[ v[i] ] = INT_MIN;
        color[ v[i] ] = WHITE;
    }

    queue< int>bfsQueue;

    dis[source] = 0;
    bfsQueue.push(source);

    while(!bfsQueue.empty())
    {
        current = bfsQueue.front();
        color[source] = GREY;
        bfsQueue.pop();

        for(i=0; i<v.size(); i++)
        {
            if(mat[current][ v[i] ] == 1 && color[ v[i] ] == WHITE)
            {
                color[v[i]] = GREY;
                dis[v[i]] = dis[current] + 1;
                bfsQueue.push(v[i]);
            }
        }
        color[current] = BLACK;
    }
}


int main()
{

    while(1)
    {
        scanf("%ld",&edge);

        if(edge == 0)
        {
            break;
        }

        for(j=0; j<edge; j++)
        {
            long long int a,b;
            scanf("%ld%ld",&a,&b);
            s.insert(a);
            s.insert(b);
            mat[a][b] = 1;
            mat[b][a] = 1;
        }
        for(it = s.begin(); it!=s.end(); it++)
        {
            v.push_back(*it);
        }

        long long int start,k;

        while (1)
        {
            scanf("%ld",&start);
            scanf("%ld",&k);
            if(start == 0 && k == 0)
            {
                break;
            }

            bfs(start);

            ck = 0;
            for(j = 0 ; j<v.size() ; j++)
            {
                if(dis [v[j]] > k )
                {
                    ck++;
                }
            }
            printf("Case %ld: %ld nodes not reachable from node %ld with TTL = %ld.\n",test,ck,start,k);
            test++;
        }
        s.clear();
        v.clear();
        memset(dis,0,sizeof(dis));
        memset(color,0,sizeof(color));
        memset(mat,0,sizeof(mat));
    }

    return 0;
}


/*



#include<bits/stdc++.h>
#include<string>
using namespace std;
vector<long long >vec[100000];
map<long long,long long>vis,visit,dist;
queue<long long>q;
main()
{
    long long n,cs=1,i;
    while(cin>>n)
    {
        if(n==0)
            break;
        dist.clear();
        vis.clear(),visit.clear();
        for(i=0; i<=100000; i++)
        {
            vec[i].clear();
        }
        long long a,b,no=0;

        for(i=1; i<=n; i++)
        {
            cin>>a>>b;
            vec[a].push_back(b);
            vec[b].push_back(a);
            if(vis[a]==0)
            {
                vis[a]=1;
                no++;
            }
            if(vis[b]==0)
            {
                vis[b]=1;
                no++;
            }
        }
        long long x,y,no1=0,x1,y1;
        while(cin>>x>>y)
        {
            no1=0;
            if(x==0&&y==0)
                break;
            visit.clear();
            q.push(x);
            visit[x]=1;
            dist[x]=0;
            while(!q.empty())
            {
                x1=q.front();
                q.pop();
                y1=vec[x1].size();
                for(i=0; i<y1; i++)
                {
                    if(visit[ vec[x1][i] ]==0)
                    {
                        dist[ vec[x1][i] ]=dist[x1]+1;
                        if(dist[vec[x1][i]]>y)
                            break;
                        no1++;
                        visit[vec[x1][i]]=1;
                        q.push(vec[x1][i]);
                    }
                }
            }
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",cs++,no-no1-1,x,y);
        }
    }
}





*/
