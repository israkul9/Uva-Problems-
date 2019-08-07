
/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;

#define bug cout <<"-----------"<<endl
const long long INF = (long long)1e18;
#define ll long long int
int const N = 3e5 + 10;
int const MOD = 1e9 + 7;
#define inf 10001112222
#define MAX 2268312229760322080

const int maxn = 102 ;
char mat[maxn][maxn];
bool visited[maxn][maxn];
int r, c ;
int fx[] = {-1,1,0,0,-1,1,1,-1};
int fy[] = {0,0,-1,1,-1,1,-1,1};
typedef pair < int, int > pii;

void bfs (int x,int y)
{
    queue < pii > q ;
    q.push({x,y});
    visited[x][y] = true ;
    //mat[x][y] = '1';

    while(!q.empty())
    {
        pii coordinate = q.front();
        q.pop();
        int x1 = coordinate.first;
        int y1 = coordinate.second;

        for(int i = 0 ; i<8 ; ++i)
        {
            int u1 = x1 + fx[i];
            int v1 = y1 + fy[i];
            if(u1>=0 and u1<r and v1>=0 and v1<c)
            {
                if(!visited[u1][v1])
                {
                    if(mat[u1][v1]=='@')
                    {
                        q.push(make_pair(u1,v1));
                        //mat[u1][v1] = '1';
                        visited[u1][v1] = true;
                    }
                }
            }
        }

    }

}


int main()
{
    while ( scanf("%d %d",&r,&c)!=EOF)
    {
        if(r==0)
            return 0 ;
        for(int i = 0; i<r ; ++i)
        {
            scanf("%s",mat[i]);
        }
        // bug;
        memset(visited,false,sizeof visited);
        //bfs(1,1);
        int ans = 0 ;
        for(int i = 0; i<r ; ++i)
        {
            for(int j = 0 ; j<c ; ++j)
            {
                if(mat[i][j]=='@' and !visited[i][j])
                {
                    bfs(i,j);
                    ans++;
                }
                //printf("%c",mat[i][j]);
            }
            //  printf("\n");

        }
        printf("%d\n",ans);

        memset(mat,false,sizeof(mat));
    }
    return 0 ;

}
