//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
#define Max 150
using namespace std;


vector< int > graph[Max];
map< int,int  > visit;


void dfs (int start)
{
    int x;

    visit[start] = 1;
    for(int k = 0; k<graph[start].size(); k++)
    {
        x = graph[start][k];
        if(visit[x] == 0)
        {
            dfs(x);
        }
    }

}

int main()
{

    string a,node;

    int test;

    scanf("%d\n\n",&test);

    for(int n=1; n<=test; n++)
    {

        cin>>node;
        cin.ignore();


        for(int f = 0; f<=node[0]-'A'; f++)
        {
            graph[f].clear();
            visit[f] = 0;
        }


        while( getline(cin,a) && a[0] )
        {


            graph[a.at(0)-'A'].push_back(a.at(1)-'A');

            graph[a.at(1)-'A'].push_back(a.at(0)-'A');

            a.clear();

        }

        int ck = 0;
        for(int  g = 0 ; g<=node[0]-'A'; g++)
        {
            if(visit[g] == 0)
            {
                dfs(g);
                ck++;
            }
        }


        cout<<ck<<endl;

        if(n<test)
        {
            cout<<endl;
        }

        a.clear();
        visit.clear();
        node.clear();

    }

    return 0;
}

