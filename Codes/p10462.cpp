
/// WA code

#include <bits/stdc++.h>
using namespace std;


int node,edges;
const int Max = 300;
int id[Max];


int box[Max][Max], reach[Max];

void dfs(int v)
{
    reach[v]=1;

    for(int i=1; i<=node; i++)
    {
        if(box[v][i] == 1 && reach[i] == 0)
        {
            dfs(i);
        }
    }
}



void initialize()
{
    for(int i = 0; i < Max; i++)
        id[i] = i;
}

int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void Union(int x,int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

int main()
{
    long long weight,cost,minimumcost;
    int t;
    cin >> t;
    for(int cs = 1 ; cs<=t ; ++cs)
    {
        pair<long long, pair<int,int> > p[Max];
        vector<int>v,v1;;
        cin >> node >> edges;
        int tm ;
        for(int i = 0; i < edges; i++)
        {
            int x,y;

            cin >> x >> y >> weight;
            tm = x ;

            if(x!=y)
            {
                box[x][y] = 1;
                box[y][x] = 1;
                p[i] = make_pair(weight, make_pair(x,y));
                p[i] = make_pair(weight, make_pair(y,x));
            }

        }
        sort(p, p+edges);
        initialize();
        int x,y;
        int cost, minimumcost = 0;
        for(int i = 0; i < edges; i++)
        {
            x = p[i].second.first;
            y = p[i].second.second;
            cost = p[i].first;
            if(root(x) != root(y))
            {
                v1.push_back(i);
                minimumcost += cost;
                Union(x,y);
            }
        }

        dfs(tm);
        int ff = 0;
        for(int i=1; i<=node; i++)
        {
            if(reach[i]==1)
                ff++;
        }
        cout<<"Case #"<<cs<<" : ";

        if(ff!=node and node-1!=edges)
        {
            cout<<"No way"<<endl;
        }
        else if(node-1==edges )
        {
            cout<<"No second way"<<endl;
        }
        else
        {
            int d = v1.size();
            while(d--)
            {
                initialize();
                int x,y,cn=0;
                int cost, minimumcost = 0;
                for(int i = 0; i < edges; i++)
                {
                    if(v1[d] == i)
                        continue;
                    x = p[i].second.first;
                    y = p[i].second.second;
                    cost = p[i].first;
                    if(root(x) != root(y))
                    {
                        cn++;
                        minimumcost += cost;
                        Union(x,y);
                    }
                }
                if(cn == node-1)
                    v.push_back(minimumcost);
            }
            sort(v.begin(),v.end());
            cout << v[0] << endl;
        }
        v.clear();

        memset(reach,false,sizeof(reach));
        memset(id,false,sizeof(id));
        for(int i = 0 ; i<Max; i++)
        {
            for(int j = 0 ; j<Max; j++)
            {
                box[i][j] = 0 ;
            }
        }
    }

    return 0;
}


