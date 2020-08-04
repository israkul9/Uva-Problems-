/*

Bismillah_hir_rahmanir_rahim

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;


#define bug cout <<"--------------------------\n"

#define inf ( ll  )( 1e18 + 100 )


#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define PI          2*acos(0.0)
#define MOD         1000000007
#define yes         cout << "yes" << endl
#define no          cout << "no" << endl
#define YES         cout << "YES" << endl
#define NO          cout << "NO" << endl
#define LCM(a, b)   ((a)*(b)) / __gcd(a, b)
#define INPUT       freopen("input.txt", "r", stdin);
#define OUTPUT      freopen("output.txt", "w", stdout);
#define PRINT(a)    for(auto i : a) cout << i << " "; cout << endl;


int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
string lowerCase = "abcdefghijklmnopqrstuvwxyz";
string upperCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


/// Graph moves
/// const int fx[] = {+1,+1,+0,-1,-1,-1,+0,+1}; /// King's move
/// const int fy[] = {+0,+1,+1,+1,+0,-1,-1,-1}; /// King's move



/// int dx[] = {0, 0, +1, -1};
/// int dy[] = {+1, -1, 0, 0};   //4 Direction Array

int dx[] = {0, 0, -1, +1, -1, -1, +1, +1};
int dy[] = {-1, +1, 0, 0, -1, +1, -1, +1};   //8 Direction Array

/// int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2},
/// int  dy[] = {-1, +1, -2, +2, -2, +2, -1, +1}; //Knight Moves

/// int dx[]={-1,-1,+0,+1,+1,+0};
/// int dy[]={-1,+1,+2,+1,-1,-2}; ///Hexagonal Direction


bool isPallindrome(string s)
{
    string r=s;
    reverse(s.begin(),s.end());
    if(s==r)
        return true;
    return false;
}


template < typename T>
std::string NumberToString ( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

const int maxn = 102;

string grid[maxn];


bool visit[maxn][maxn];

int row = 0 ;

int coll ;

int ans;

void dfs( int px, int py )
{

    visit[px][py]  = true;

    for(int i = 0 ; i < 8 ; i++)
    {
        int curx = dx[i] + px ;
        int cury = dy[i] + py;

        if( curx >= 0 and curx < row and cury>=0 and cury<coll )
        {

            if( !visit[curx][cury] and  grid[curx][cury] == 'W' )
            {
                ans++;
                dfs(curx, cury);
                // grid[curx][cury] = '0';
            }

        }

    }


}



int main()
{
    FIO;


    int kase ;


    cin >> kase ;

    cout<<endl;

    while(kase--)
    {

        cin.ignore();
        string line;
        while (true)
        {
            getline(cin, line);
            if (line.length() > 0 and (line[0] == 'L' or line[0] == 'W'))
            {
                grid[row] = line;
                row++;
            }
            else
            {

                break;
            }

        }
        coll = grid[0].length();
        // bug;



        int tx, ty ;

        while (cin >> tx >> ty)
        {

            ans = 1;

            dfs(tx-1,ty-1);

            cout << ans <<endl;

            for(int i = 0 ; i < row ; i++)
            {
                grid[i].clear();
            }
        }

        if(kase)
            puts("");

    }

    return 0 ;

}

