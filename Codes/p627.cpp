//Bismillah_Hir_Rahmanir_Rahim


#include<bits/stdc++.h>
using namespace std;


const int MAX = 500;
int n,i,j,h,ind,num,N;

stack<int>st;
typedef vector<int>vii;
vii dis,parent,vis;
vector<int>Graph[MAX];



void bfs(int start)
{


    dis.assign(n+1,INT_MAX);
    vis.assign(n+1,0);
    parent.assign(n+1,-1);
    dis[start] = 0;
    parent[start] = -1;
    queue<int>q;
    q.push(start);
    while(!q.empty())
    {
        int f = q.front();
   
        q.pop();
        vis[f] = 1;
        for(int t=0; t<Graph[f].size(); ++t)
        {
            int node = Graph[f][t];
            if(vis[node]==0)
            {
                q.push(node);
                vis[node] = 1;
                parent[node] = f;
                dis[node] = dis[f] + 1;
            }
        }
        vis[f] = 2;
    }

}

int main()
{

    while(cin>>n)
    {
        string routes;

        for(int i = 1; i <= n; i++)
        {
            cin >> routes;
            num = 0;
            int sz = routes.size();
            for(int j = 0; j < sz; j++)
            {
                if(routes[j] == '-')
                    ind = num, num = 0;
                else if(routes[j] == ',')
                    Graph[ind].push_back(num), num = 0;
                else
                    num = (num*10) + (routes[j]-'0');
            }
            if(num)
                Graph[ind].push_back(num);
        }


        int query,source,desti;
        cin>>query;
        cout<<"-----"<<endl;
        for(int k=0; k<query; ++k)
        {
            cin>>source>>desti;
            bfs(source);
            if(dis[desti]==INT_MAX)
            {
                cout<<"connection impossible"<<endl;
            }

            else
            {
                N = desti;
                st.push(N);
                while(1)
                {
                    int t = parent[N];

                    st.push(t);
                    if(parent[t]==-1)
                    {
                        break;
                    }
                    N = t;

                }


                int sz = st.size();
                int ck=1;
                while(!st.empty())
                {
                    int top = st.top();

                    st.pop();
                    cout<<top;
                    if(ck<sz)
                    {
                        printf(" ");
                        ck++;
                    }

                }
                cout<<endl;
            }


        }
        for(int g=0; g<500; g++)
        {
            Graph[g].clear();
        }
        dis.clear();
        vis.clear();
        parent.clear();


    }











    return 0;
}


