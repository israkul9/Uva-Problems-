//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;



typedef vector<int>vii;

vector<int>mat[50000];
const int INF = 1e19;
vii dist;


int cost[20000+10][20000+10];
int n,m,s,t;
priority_queue<pii, vector<pii>, greater<pii> > Q;

void DIJKSTRA (int source)
{
    priority_queue<pii, vector<pii>, greater<pii> > Q;

    dist[source] = 0;
    Q.push(pii(0,source));
    while(!Q.empty())
    {
        pii f = Q.top();
        int u = f.second;
        Q.pop();

        for(int i=0; i<mat[u].size(); i++)
        {
            int v = mat[u][i];

            if(dist[u]+cost[u][v]<dist[v])
            {
                dist[v] = dist[u]+cost[u][v];
                Q.push(pii(dist[v],v));
            }
        }

    }


}


int main()
{


    int test;
    cin>>test;

    for(int st=1; st<=test; ++st)
    {

        cin>>n;
        dist.assign(n,INF);

        cin>>m;
        cin>>s>>t;
        for(int i=0; i<m; ++i)
        {
            int a,b,w;
            cin>>a>>b>>w;
            mat[a].push_back(b);
            mat[b].push_back(a);
            cost[a][b] = w;
            cost[b][a] = w;

        }

        DIJKSTRA(s);


        cout<<"Case #"<<st<<": ";
        if(dist[t]==INF)
        {

            cout<<"unreachable"<<endl;
        }
        else
        {
            cout<<dist[t]<<endl;
        }
        dist.clear();
        memset(mat,false,sizeof(mat));
        memset(cost,false,sizeof(cost));

//        while(!Q.empty())
//        {
//            Q.pop();
//        }
    }

    return 0;
}


/*

3 3 2 0
0 1 100
0 2 200
1 2 50


*/



/*


another code ::


#include <bits/stdc++.h>
using namespace std;

typedef vector<long long > vi;
typedef pair<int,int> pii;
typedef vector< pii > vii;

const long long INF = (long long )1e18;

vector<pair<int,int> >G[20000];
const  int p = -1;
vi Dist,parent;
void Dijkstra(int source, int N)
{
    //    cerr<<"###"<<" "<<endl;
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist.assign(N,INF);
    //  cerr<<"### :"<<INF<<endl;
    Dist[source] = 0;

    Q.push({0,source});
    while(!Q.empty())
    {
        int u = Q.top().second;/// node
        long long kk = Q.top().first;
        Q.pop();
        if(Dist[u]!=kk)
            continue;

        for(auto c : G[u])
        {
            int v = c.first;
            int w = c.second;
            if(Dist[v] > Dist[u]+w)
            {
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
                // parent[v]=u;
            }
        }
    }
}



int main()
{
    int N, M, u, v, w, source,s,t;

    int test;
    cin>>test;

    for(int st=1; st<=test; ++st)
    {

        cin >> N >> M >>s >>t;


        Dist.assign(N,INF);

        //parent.assign(N,p);

        for(int i=0; i<M; ++i)
        {
            cin >> u >> v >> w;
            G[u].push_back({v,w});
            G[v].push_back({u,w});

        }

        Dijkstra(s,t);


        cout<<"Case #"<<st<<": ";
        if(Dist[t]==INF)
        {

            cout<<"unreachable"<<endl;
        }
        else
        {
            cout<<Dist[t]<<endl;
        }
        Dist.clear();
        memset(G,false,sizeof(G));

    }
    return 0;
}

*/
