//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>


#define SIZE 100000
using namespace std;


vector<int>vec[SIZE];

int node,edge;

map<int, int>visit;

vector<int>order;

stack<int>st;


void dfs(int start)
{
    int t;
    visit[start] =1;

    int sz1 = vec[start].size();

    for(int i=0; i<sz1; i++)
    {
        t = vec[start][i];
        if(visit[t] == 0 )
        {
            dfs(t);
        }
    }
    visit[start] = 2;
    st.push(start);
}


void dfs2(int value)
{


    visit[value] = 1;
    int f ;
    int sz2 = vec[value].size();

    for(int i=0; i<sz2; ++i)
    {

        f = vec[value][i];
        if( visit[f] == 0 )
        {
            dfs2(f);
        }

    }
    visit[value] = 2;

}


int main()
{



    int test;
    cin>>test;
    while(test--)
    {
        cin>>node;

        for(int i=1; i<=node; ++i)
        {
            visit[i] = 0;
        }

        cin>>edge;

        for(int i=1; i<=edge; i++)
        {
            int x,y;
            cin>>x>>y;
            vec[x].push_back(y);
        }

        for(int i=1; i<=node; i++)
        {
            if(visit[i] == 0)
            {
                dfs(i);
            }
        }

        while(st.empty() == false )
        {
            order.push_back(st.top());
            st.pop();
        }


        /// second step

        visit.clear();

        for(int i=1; i<=node; ++i)
        {
            visit[i] = 0;
        }


        int count = 0;
        for(int i=0; i<order.size(); ++i)
        {

            if(visit [ order[i] ] == 0 )
            {
                dfs2( order[i] );
                count++;
            }

        }

        cout<<count<<endl;

        visit.clear();
        order.clear();

        for(int i=0; i<=node; i++)
        {
            vec[i].clear();
        }


    }
    return 0;
}

