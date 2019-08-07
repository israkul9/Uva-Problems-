//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>

using namespace std;

int adjMat[400][400]= {0},color[400];
int i,j,node,edge;

queue<int>q;

bool isBipartite(int starting_node)
{

    for(i=0; i<node; i++)
    {
        color[i]=-1;
    }
    color[starting_node]=1;
    q.push(starting_node);

    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        if(adjMat[current][current]==1)
        {
            return false;
        }
        for(i=0; i<node; ++i)
        {
            if(adjMat[current][i]==1  && color[i]==-1 )
            {
                q.push(i);
                color[i]=1-color[current];
            }
            else if(adjMat[current][i]==1 && color[current]==color[i])
            {
                return false;
            }
        }
        //color[u]=0;
    }
    return true;
}

int main()
{
    while(1)
    {
        cin>>node>>edge;

        if(node==0)
        {
            return 0;
        }

        for(i=0; i<node; i++)
        {
            for(j=0; j<node; j++)
            {
                adjMat[i][j]=0;
            }
        }

        for(j=0; j<edge; j++)
        {
            int x1,x2;
            cin>>x1>>x2;
            adjMat[x1][x2]=1;
            adjMat[x2][x1]=1;
        }
        if(isBipartite(0))
        {
            cout<<"BICOLORABLE."<<endl;
            memset(color,0,sizeof(color));
        }
        else
        {
            cout<<"NOT BICOLORABLE."<<endl;
            memset(color,0,sizeof(color));
        }
    }
    return 0;
}

