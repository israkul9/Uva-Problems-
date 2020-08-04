/*

Bismillah_hir_rahmanir_rahim

*/

#include <bits/stdc++.h>
#include<string>
#include <sstream>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;

#define inf ( ll  )( 1e18 + 100 )
#define bug cout <<"--------------------------\n"



#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
#define NUMDIGIT(x,y) (((vlong)(log10((x))/log10((y))))+1)

#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define PI          2*acos(0.0)
#define MOD         1000000007
#define endl        '\n'
#define yes         cout << "yes" << endl
#define no          cout << "no" << endl
#define YES         cout << "YES" << endl
#define NO          cout << "NO" << endl
#define LCM(a, b)   ((a)*(b)) / __gcd(a, b)
#define LIMIT(a, b) (a>=1 && a<=n && b>=1 && b<=m)
#define INPUT       freopen("input.txt", "r", stdin);
#define OUTPUT      freopen("output.txt", "w", stdout);
#define PRINT(a)    for(auto i : a) cout << i << " "; cout << endl;


int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
string lowerCase = "abcdefghijklmnopqrstuvwxyz";
string upperCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

/// Graph moves
/// const int fx[] = {+1,+1,+0,-1,-1,-1,+0,+1}; /// King's move
/// const int fy[] = {+0,+1,+1,+1,+0,-1,-1,-1}; /// King's move



int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};   //4 Direction Array

///  int dx[] = {0, 0, -1, +1, -1, -1, +1, +1}, dy[] = {-1, +1, 0, 0, -1, +1, -1, +1};   //8 Direction Array

///int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2}, dy[] = {-1, +1, -2, +2, -2, +2, -1, +1}; //Knight Moves

///int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; ///Hexagonal Direction


bool isPallindrome(string s)
{
    string r=s;
    reverse(s.begin(),s.end());
    if(s==r)
        return true;
    return false;
}


template <typename T>
std::string NumberToString ( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

struct data
{

    int x;
    int y;

};

int row, col ;

const int maxn = 1020 ;

int graph[maxn][maxn]= {0};

int dist[maxn][maxn];


bool visited[maxn][maxn];

void bfs (int sx, int sy)
{
    memset(visited , false , sizeof visited);
     memset(dist, false , sizeof dist);


    visited[sx][sy] = true;
    queue <data> qq;
    dist[sx][sy] = 0;

    qq.push({sx,sy});

    while(!qq.empty())
    {

        int u = qq.front().x;
        int v = qq.front().y;
        qq.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int nx = dx[i] + u ;
            int ny = dy[i] + v;

            if( nx >=0 and nx <= row and ny >=0 and ny <= col )
            {
                if( graph[nx][ny]==0 and visited[nx][ny]==false )
                {
                     qq.push({nx,ny});
                     visited[nx][ny] = true;
                     dist[nx][ny] = dist[u][v] + 1;
                }
            }
        }

    }



}


int main()
{

    FIO;


   while( cin >> row >> col ){


   if(row == 0 and col == 0 ){
    return 0;
   }
    int xx ;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            graph[i][j] = 0;
        }
    }

    cin >> xx ;


    for(int i = 0 ; i < xx ; i++)
    {
        int r ;

        cin >> r ;

        int k ;

        cin >> k ;

        while(k--)
        {
            int val ;
            cin >> val ;
            graph[r][val] = 1 ;
            // graph[val][r] = 10 ;
        }

    }

    int sourcex , sourcey , destx , desty;

    cin >> sourcex >> sourcey;

    bfs(sourcex , sourcey);

    cin >> destx >> desty ;

    cout << dist[destx][desty] <<endl;
   }

//    for(int i = 0 ; i < row ; i++)
//    {
//
//        for(int j = 0 ; j < col ; j++)
//        {
//            cout << graph[i][j] <<" ";
//        }
//
//        cout <<endl;
//    }


    return 0;

}

