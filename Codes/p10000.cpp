//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;


const int M = 105 ;
int mat[M][M] ;

int dis[M] ;
int start, node ;

queue < int > q;

void bfs(int s)
{
    q.push(s);

    dis[s] = 0 ;

    while(!q.empty())
    {
        int nod = q.front();
        q.pop();


        for(int i = 1 ; i<=node ; i++)
        {
            if(mat[nod][i]==1 and dis[nod]+1 > dis[i])
            {
                // vis[i] = 1 ;
                dis[i] = dis[nod] + 1 ;
                q.push(i);

            }

        }
    }
}


int main()
{

    int cs = 1 ;
    while ( cin >> node and node > 0)
    {

        cin >> start ;
        for(int i = 1 ; i<=node ; i++)
        {

            dis[i] = 0 ;
           
        }
        int a, b ;

        for( ; ; )
        {
            cin >> a >> b ;
            if(a==0 and b==0)break;
            mat[a][b] = 1 ;
        }

        bfs(start);

        int m = 0 ;
        int n = 0 ;

        for(int i = 1 ; i<=node ; i++)
        {
            if(dis[i]>m)
            {
                m = dis[i];
                // n = i ;
            }
        }

        int desti = 0 ;

        vector < int > vec ;

        for(int i = 1 ; i<=node ; i++)
        {
            if(dis[i]==m)
            {
                //cout<<i<<" ";
                vec.push_back(i);
            }
        }
        sort(vec.begin(), vec.end());
        desti = vec.front();

        if(m==0)
            desti = start ;
        
        
        cout<<"Case "<<cs<<": The longest path from "<<start<<" has length "<<m<<", finishing at "<<desti<<"."<<endl<<endl;
        ++cs ;
        vec.clear();
        memset( dis, false, sizeof(dis) );
        for(int i = 0 ; i<M; i++)
        {
            for(int j = 0 ; j<M ; j++)
            {
                mat[i][j] = 0 ;
            }
        }



    }
    return 0;
}

