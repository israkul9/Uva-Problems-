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
#define INPUT       freopen("input.txt", "r", stdin);
#define OUTPUT      freopen("output.txt", "w", stdout);
#define PRINT(a)    for(auto i : a) cout << i << " "; cout << endl;


int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
string lowerCase = "abcdefghijklmnopqrstuvwxyz";
string upperCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

/// Graph moves
/// const int fx[] = {+1,+1,+0,-1,-1,-1,+0,+1}; /// King's move
/// const int fy[] = {+0,+1,+1,+1,+0,-1,-1,-1}; /// King's move



int dx[] = {-10000,0, 0, +1, -1};
int dy[] = {-10000,+1, -1, 0, 0};   //4 Direction Array

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


const int maxn = 150 ;

int ro, col ;


bool  visited[maxn][maxn];
char grid[maxn][maxn];


int freq[127];

void dfs(int sx, int sy)
{

    visited[sx][sy] = true;

    for(int i = 1 ; i <=4 ; i++)
    {
        int nowx = sx + dx[i];
        int nowy = sy + dy[i];

        if(nowx >= 1 and nowx <=ro and nowy>=1 and nowy<=col)
        {
            if( !visited[nowx][nowy] and grid[sx][sy]==grid[nowx][nowy] )
            {

                dfs(nowx,nowy);
            }
        }
    }

}



struct data
{
    int val, frequency ;
};


data arr[28];


bool compare(  data x, data y )
{
    if( x.frequency == y.frequency )
        return x.val < y.val ;

    else  return x.frequency > y.frequency;

}


int main()
{
    FIO;



    int tst;

    cin >> tst ;


    for(int kase = 1 ;  kase <= tst ; kase++)
    {


        cin >> ro >> col ;


        for(int i = 1 ; i <=ro ; i++)
        {
            for(int j = 1 ; j<=col ; j++)
            {
                grid[i][j] = '\0';
                visited[i][j] = false;
            }
        }



        for(int i = 1 ; i<=28 ; i++)
        {
            arr[i].frequency = 0 ;
            arr[i].val = 0 ;
        }




        for(int i = 97 ; i<=125; i++)freq[i] = 0;


        for(int i = 1 ; i <= ro ; i++)
        {
            for(int j = 1  ; j <= col ; j++)
            {
                cin >> grid[i][j] ;

            }
        }

        for(int i = 1 ; i <= ro ; i++)
        {
            for(int j = 1  ; j <= col ; j++)
            {
                if(visited[i][j]==false)
                {
                    char tt = grid[i][j];
                    int xx = (int)tt;

                    freq[xx]++;

                    dfs(i,j);

                }

            }

        }



        for(int pos = 1 ,  i = 97 ; i <= 123 ; i++, pos++)
        {
            arr[pos].val = i;
            arr[pos].frequency = freq[i];
            // cout <<(char)i<<" : "<< freq[i] <<endl;
        }
        //bug;

        sort(arr+1, arr+28, compare);


        cout <<"World #"<<kase<<endl;

        for(int i = 1 ; i <= 26 ; i++)
        {
            if( arr[i].frequency > 0 )
                cout << (char)arr[i].val <<": "<<arr[i].frequency <<endl;
        }
    }
    return 0;

}

