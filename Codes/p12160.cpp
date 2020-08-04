//#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#define ll long long int
using namespace std ;

const ll maxn = 10000+4;

#define mod 1000000007

ll min(ll a,ll b)
{
    if (a <= b) return a;
    return b;
}


ll max(ll a, ll b)
{
    if( a > b) return a;
    return b;
}


ll abs(ll x)
{
    if(x<0)
        return (-1*x);
    return x;
}



ll L,U, R;


ll v1[maxn];

ll dist[maxn];

bool visited[maxn];

int main()
{



    for(int kase = 1 ;  ; kase++)
    {

        cin >> L >> U >> R ;
           if(L==0 and U==0 and R==0){
            return 0;
           }


        for(int k = 0 ; k < maxn ; k++)
        {
            visited[k] = false;
            dist[k] = -1;
            v1[k]=0;
        }


        for(int i = 0 ; i < R ; i++)
        {
            cin >> v1[i];
        }




        visited[L] = true ;

        dist[L] = 0 ;

        queue <ll> qq;

        qq.push(L);

        while(!qq.empty())
        {

            ll now = qq.front();
            qq.pop();

            for(int tt = 0 ; tt < R ; tt++)
            {
                ll jabe = (v1[tt] + now) % 10000 ;

                if( !visited[jabe] )
                {
                    qq.push(jabe);
                    visited[jabe] = true ;
                    dist[jabe] = dist[now] + 1 ;
                }

            }

        }


        cout <<"Case "<<kase<<": ";
        if(dist[U]==-1)
        {
            cout <<"Permanently Locked"<<endl;
        }
        else
        {
            cout << dist[U] <<endl;
        }
    }

    return 0 ;
}
