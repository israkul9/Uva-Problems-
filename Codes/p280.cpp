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


const int maxn = 102;

int node ;

bool visited[maxn];

vector <int> graph[maxn];

void dfs(int start)
{
    for(int i = 0 ; i < graph[start].size() ; i++)
    {

        if( !visited[  graph[start][i] ] )
        {
            visited[ graph[start][i] ] = true;

            dfs( graph[start][i]  );
        }
    }
}


int main()
{

    FIO;
    while(   cin >> node )
    {

        if(node==0)return 0;
        for(int i = 1 ; i <= node ; i++)visited[i] = false;


        for( ;  ; )
        {
            int x ;
            cin >> x ;

            if(x==0)break;

            while(1)
            {
                int val;
                cin >> val ;

                if(val==0)break;
                else
                    graph[x].push_back(val);
            }

        }


        int sources;

        cin >> sources;

        while(sources--)
        {



            for(int i = 1 ; i <= node ; i++)visited[i] = false;

            int x;

            cin >> x  ;
            dfs(x);

            int ans = 0 ;
            for(int i = 1 ; i<= node ; i++)
            {
                if(!visited[i])
                {
                    ans++;
                }

            }



            if( ans==0)
            {
                cout <<"0"<<endl;
            }
            else
            {

                cout << ans <<" ";
                for(int i = 1 ; i<= node ; i++)
                {
                    if(!visited[i])
                    {
                        cout <<i ;

                        if( ans-1 >0 )
                        {
                            ans--;
                            cout <<" ";
                        }



                    }

                }
                 cout <<endl;
            }


        }

         for(int i = 0 ; i<110 ; i++)
                graph[i].clear();




    }
    return 0;

}

