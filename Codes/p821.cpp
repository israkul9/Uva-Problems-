//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3
using namespace std;


int a,b,x,Pair,sz,test;
int vec[300][300];
vector<int>node_number;
set<int>s;
set<int>::iterator its,its1;
int visit[300];
int dis[300];
double result;


void bfs(int source)
{

    for(int i=0; i<node_number.size(); i++)
    {

        visit[node_number[i]] = WHITE;
        dis[node_number[i]] = INT_MIN;

    }

    dis[source] = 0;
    queue<int>q;
    q.push(source);

    while(!q.empty())
    {
        x = q.front();

        // cout<<x<<endl;
        q.pop();
        visit[x] = GRAY;

        for(int i=0; i<node_number.size(); i++)
        {
            if(  vec[x][node_number[i]]==1 && visit[ node_number[i] ]==WHITE )
            {
                visit[node_number[i]] =GRAY;
                dis[node_number[i]] = dis[x]+1;
                q.push(node_number[i]);

            }
        }

        visit[x] = BLACK;

    }
}



int main()
{
    while(1)
    {

        while(1)
        {
            cin>>a>>b;

            if(a==0 && b==0)
            {
                break;
            }

            else
            {
                s.insert(a);
                s.insert(b);
                vec[a][b]=1;
            }


        }





        for(its = s.begin(); its!=s.end(); its++)
        {
            node_number.push_back(*its);
        }


        sz = node_number.size();
        Pair = sz*(sz-1);

        int sum = 0,q,p;


        for(its = s.begin(); its!=s.end(); its++)
        {
            p = *its;
            bfs(p);

            for(its1 = s.begin() ; its1!=s.end(); its1++)
            {
                q = *its1;

                if(p!=q)
                {
                    //cout<<q<<endl;
                    sum = sum + dis[q];
                }

            }

        }

        if(s.size()==0)
        {
            break;
        }
        result = (double)sum/(double)Pair;
        test++;
        cout<<"Case "<<test<<": "<<"average length between pages = ";
        printf("%.3lf clicks\n",result);






        memset(visit,0,sizeof(visit));
        memset(dis,0,sizeof(dis));
        s.clear();
        node_number.clear();

        for(int i=0; i<300; i++)
        {
            for(int j=0; j<300; j++)
            {
                vec[i][j]=0;
            }
        }

    }

    return 0;
}


