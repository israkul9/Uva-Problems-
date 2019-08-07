
#include <bits/stdc++.h>
using namespace std;
int node,edges;
const int Max = 1e4+5;
int id[Max];

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
    while(t--)
    {
        pair<long long, pair<int,int> > p[Max];
        vector<int>v,v1;;
        cin >> node >> edges;
        for(int i = 0; i < edges; i++)
        {
            int x,y;
            cin >> x >> y >> weight;
            p[i] = make_pair(weight, make_pair(x,y));
        }
        sort(p, p+edges);
        initialize();
        int x,y;
        long long cost, minimumcost = 0;
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
        cout << minimumcost << " ";
        
        
        int d = v1.size();
        while(d--)
        {
            initialize();
            int x,y,cn=0;
            long long cost, minimumcost = 0;
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
            //f--;
        }
        sort(v.begin(),v.end());
        cout << v[0] << endl;
    }

    return 0;
}

