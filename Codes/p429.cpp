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



/// int dx[] = {122222,0, 0, +1, -1};
/// int dy[] = {122222,+1, -1, 0, 0};   //4 Direction Array

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



bool isOneCharDiff (string a, string b)
{
    if ( a.length() != b.length() ) return false;

    int cnt = 0;

    for ( int i = 0; i < a.length(); i++ )
    {
        if ( a [i] != b [i] ) cnt++;
    }

    return (cnt == 1) ? true : false;
}


const int maxn = 250;

vector < int > graph[maxn];


bool visited[maxn];
int dist [maxn];


void bfs (int s)
{

    memset(visited, false, sizeof visited);
    memset(dist, false, sizeof dist);

    visited[s] = true;
    dist[s] = 0;
    queue <int> qq;

    qq.push(s);

    while( !qq.empty() )
    {

        int x = qq.front();
        qq.pop();
        for(int i = 0 ; i < graph[x].size() ; ++i)
        {
            if( !visited[ graph[x][i] ] )
            {
                visited[ graph[x][i]  ] = true;
                qq.push( graph[x][i]  );
                dist[  graph[x][i]  ] = dist[x] + 1;
            }
        }
    }

}


//map < string, int > mymap ;
//vector < string > vec ;



int main()
{

    FIO;

    int data ;

    cin >> data ;


    while(data--)
    {

//        mymap.clear();
//        vec.clear();


        int k = 1 ;


        string line;

        map<string, int> dict;
        int ds = 0;
        while(true)
        {
            getline(cin, line);
            if (line == "*")
                break;
            dict[line] = ds++;
        }
        // PRINT(vec);



        for (auto oit = dict.begin(); oit != dict.end(); ++oit)
        {
            for (auto iit = dict.begin(); iit != dict.end(); ++iit)
            {
                if (oit == iit)
                    continue;
                if (isOneCharDiff(oit->first, iit->first))
                {

                    graph[oit->second  ].push_back(  iit->second );
                    graph[ iit->second ].push_back( oit->second);
                }

                // g.AddEdge(oit->second, iit->second);
            }
        }



        string source,des;



        while( cin >> source >> des )
        {

            bfs( dict[source] );

            cout << source << " " << des <<" "<< dist[  dict[des] ] <<endl;


        }
        if(data)  cout << endl;
    }
//    for(auto it =  mymap.begin() ; it != mymap.end() ; it++)
//        cout << it-> first <<" "<<it -> second<<endl;

    return 0;

}

