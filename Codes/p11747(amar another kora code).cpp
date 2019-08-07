#include<bits/stdc++.h>
using namespace std;


const int MAX = 1020;
int id[MAX], nodes, edges;

vector < int > vec ;

void initialize()
{
    for(int i = 0; i < MAX; ++i)
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

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

long long kruskal(pair<long long, pair<int, int> > p[])
{
    int x, y;
    long long cost, minimumCost = 0;
    for(int i = 0; i < edges; ++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost += cost;
            union1(x, y);
        }
        else
        {
            vec.push_back( cost );
        }
    }
    return minimumCost;
}

int main()
{
    int x, y;
    long long weight, cost, minimumCost;

    while (cin >> nodes >> edges)
    {
        if(nodes+edges==0)break;
        initialize();
        pair <long long, pair<int, int> > p[MAX];
        for(int i = 0; i < edges; ++i)
        {
            cin >> x >> y >> weight;
            p[i] = make_pair(weight, make_pair(x, y));
        }
        // Sort the edges in the ascending order
        sort(p, p + edges);
        minimumCost = kruskal(p);

        if(vec.size()>0)
        {

        sort(vec.begin(),vec.end());
        
        int cnt = 1 ;
        int len = vec.size() ;
            for(auto &data : vec)
            {
                cout<<data;
                if(cnt<len)
                    cout<<" ";
                cnt++;
            }
            cout<<endl;
        }
        else
            cout<<"forest"<<endl;
        ///cout << minimumCost << endl;
        memset(id,false,sizeof(id));

        vec.clear();
        //cout<<endl;
    }
    return 0;
}

