/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/


/// uva 532


#include<bits/stdc++.h>
using namespace std;

#define bug cout <<"-----------"<<endl
const long long INF = (long long)1e18;
#define ll long long int
int const N = 3e5 + 10;
int const MOD = 1e9 + 7;
#define MAX 2268312229760322080

const int maxn = 32;

int fx[] = {1,0,-1,0,0,0};
int fy[] = {0,1,0,-1,0,0};
int fz[] = {0,0,0,0,1,-1};


typedef pair < int, pair < int, int > > pii;
int level, row, col ;

bool visited[maxn][maxn][maxn];
char grid [maxn][maxn][maxn];
int dis [maxn][maxn][maxn];


void bfs (int f, int r, int c)
{

    queue < pii > q ;

    dis[f][r][c] = 0;
    visited[f][r][c] = true ;
    q.push(make_pair(f,make_pair(r,c)));

    while(!q.empty())
    {
        pii u = q.front() ;
        q.pop();

        int f1 = u.first;
        int r1 = u.second.first ;
        int c1 = u.second.second;

        for(int i = 0 ; i<6 ; ++i)
        {
            int ff1 = f1 + fx[i];
            int rr1 = r1 + fy[i];
            int cc1 = c1 + fz[i];

            if( ff1>=0 and ff1<level and rr1>=0 and rr1<row and cc1>=0 and cc1<col )
            {
                if(grid[ff1][rr1][cc1]!='#')
                {
                    if(visited[ff1][rr1][cc1]==false )
                    {
                        dis[ff1][rr1][cc1] = dis[f1][r1][c1] + 1 ;
                        visited[ff1][rr1][cc1] = true ;
                        q.push(make_pair(ff1,make_pair(rr1,cc1)));
                    }
                }
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (cin >> level >> row >> col )
    {
        if(level==0 and row==0 and col==0)
        {
            return 0 ;
        }

        memset(dis, -1, sizeof dis);

        for (int i = 0; i < level; i++)
        {
            for (int j = 0; j < row; j++)
            {
                for (int k = 0; k < col; k++)
                {
                    cin >> grid[i][j][k];

                }

            }
             // cout << endl;
        }
//   bug;


        int sfloor, srow, scol;

        int end1,end2,end3 ;

        for (int i = 0; i < level; i++)
        {
            for (int j = 0; j < row; j++)
            {
                for (int k = 0; k < col; k++)
                {
                    if(grid[i][j][k]=='S')
                    {
                        sfloor = i;
                        srow = j ;
                        scol = k ;
                    }
                    if(grid[i][j][k]=='E')
                    {
                        end1 = i ;
                        end2 = j ;
                        end3 = k ;
                    }
                }
            }
        }

        bfs(sfloor,srow,scol);

        if(dis[end1][end2][end3]==-1)
        {
            cout << "Trapped!"<<endl;
        }
        else
        {
            cout <<"Escaped in "<<dis[end1][end2][end3]<<" minute(s)."<<endl;

        }
        memset(visited,false,sizeof visited);
        memset(grid,false,sizeof grid);

    }
//    for (int i = 0; i < level; i++)
//    {
//        for (int j = 0; j < row; j++)
//        {
//            for (int k = 0; k < col; k++)
//            {
//               cout << dis[i][j][k]<<" ";
//            }
//            cout <<endl;
//
//        }
//        cout <<endl;
//    }


    return 0 ;
}

