//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
#define ll long long int
using namespace std ;

const ll MAX = 20000 + 10 ;

typedef pair<ll, ll> PII;
bool marked[MAX];


const ll INF = 1e15 + 10 ;

ll node, edge, min_cost, x, y, z, par,dis, total, ans ;

vector < PII > graph[MAX];

priority_queue<PII, vector<PII>, greater<PII> > amar_q ;

ll prim_ (ll child)
{
    memset(marked,false,sizeof(marked));
    min_cost = 0 ;
    PII p ;
    amar_q.push( {0, child } );    /// dis - node

    while(!amar_q.empty())
    {
        p = amar_q.top();
        amar_q.pop() ;
        par = p.second ; /// node

        dis = p.first;

        if(marked[par]) /// cycle pawa gele
        {
            continue ;
        }
        else
        {
            min_cost = min_cost + dis ;
            marked[par] = true ;
        }

        for(ll g = 0 ; g<graph[par].size() ; ++g)
        {
            ll tt = graph[par][g].second ;
            ll xx =  graph[par][g].first ;
            if(!marked[tt])
            {
                amar_q.push( { xx,tt } );
            }
        }
    }
    return min_cost ;

}

int main()
{
    while( cin >> node >> edge )
    {
        if(node==0 and edge==0)return 0;
        
        total = 0 ;
        for(int i = 0 ; i<edge  ; ++i)
        {
            cin >> x >> y >> z ;
            graph[x].push_back( {z,y} );
            graph[y].push_back( {z,x} );
            total = total + z ;
        }
        ans = prim_(node-1);
        cout<< total - ans <<endl;

        for(ll i = 0; i<node ; i++)
        {
            graph[i].clear() ;
        }
        
    }
    return 0;
}

