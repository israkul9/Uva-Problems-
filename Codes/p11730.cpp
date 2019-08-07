/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;


#define ll long long int
int const N = 3e5 + 10;
int const MOD = 1e9 + 7;
#define inf 10001112222
#define bug cout <<"-----------"<<endl
#define MAX 2268312229760322080

const int maxn = 1023 ;
int dis[maxn];
bool marked[maxn], visited[maxn];
vector < int > primes, now;
int s, d ;

//int graph[maxn][maxn];

void siv()
{
    for(int i = 4 ; i<maxn ; i = i + 2)
        marked[i] = 1 ;

    for(int j = 3 ; j < sqrt(maxn) ; j+=2)
    {
        if(marked[j]==0)
        {
            for(int k = j*j ; k<maxn ; k = k+(2*j))
            {
                marked[k] = 1 ;
            }
        }
    }

    for(int i = 2 ; i<maxn ; i++)
    {
        if(marked[i]==0)
            primes.push_back(i);

    }

}


void clr()
{
    memset(visited,false, sizeof visited);
    memset(dis,-1, sizeof dis);
}

void prime_factorize(int u)
{
    for(int i=0; primes[i]<u; i++)
    {
        if(u%primes[i]==0)
        {
            now.push_back(primes[i]);
        }
    }

}

int main()
{
    siv();
    int kas = 1;
    while (scanf("%d %d",&s,&d)==2)
    {
        if(s==0 and d==0)break;
        clr();

        queue < int > q ;
        q.push(s);
        dis[s] = 0 ;
        visited[s] = true ;

        while(!q.empty())
        {
            int u = q.front();
            // cout << u <<" ";
            q.pop();

            prime_factorize(u);
            for(auto &it: now)
            {
                int val = u + (it) ;
                //  cout << val <<" ";
                if(!visited[val] and val<=d)
                {
                    visited[val] = true ;
                    q.push(val);
                    dis[val] = dis[u] + 1 ;
                }
            }
            now.clear();
            visited[u] = true ;

        }

        printf("Case %d: ",kas);
        kas++;
        if(dis[d]==-1)
        {
            printf("-1\n");
        }
        else
            printf("%d\n",dis[d]);

    }
    return 0 ;

}

//


//    prime_factorize(s);
//    for(auto &it: now)
//        cout <<it<<" ";



