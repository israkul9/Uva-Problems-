#include <bits//stdc++.h>

using namespace std;

#define MAXN 410


int pr[MAXN];

int findset(int r)
{
    if(pr[r] == r)
        return r;
    return findset(pr[r]);
}


struct Edge
{
    int u, v, w;

//    bool operator<(const Edge &p) const
//    {
//        return w < p.w;
//    }
};


bool cmp (Edge e1, Edge e2)
{
    return e1.w < e2.w ;
}

vector<Edge> e;


int main()
{
    int n, m;
    // the number of nodes and edges
    while(scanf("%d %d", &n, &m)==2)
    {
        if(n==0 && m==0)
            break;
        string str, s1, s2;
        map<string, int>mp;
        int k = 1;
        for(int i = 0; i < n; i++)
        {
            cin>>str;
            mp[str] = k++;
        }

        e.clear();
        for(int i = 0; i < m; i++)
        {
            int w;
            cin>>s1>>s2>>w;
            Edge data;
            data.u = mp[s1];
            data.v= mp[s2];
            data.w = w;
            e.push_back(data);
        }

        cin>>str;

        for(int i = 1; i <= n; i++)
            pr[i] = i;

        sort(e.begin(), e.end(),cmp);

        int cot = n-1, sum = 0;
        int ck = 0 ;
        for(int i = 0; i < (int)e.size(); i++)
        {
            int u = findset(e[i].u);
            int v = findset(e[i].v);
            if(u!=v)
            {
                ck++;
                pr[u] = v;
                // cout<<cot<<" ";
                // cot--;
                sum += e[i].w;
                if(ck==cot)
                    break;
            }
        }
        if(ck==cot)
            cout << sum << endl;

        else
            cout << "Impossible" << endl;

    }

    return 0;
}

