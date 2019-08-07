//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;

/// verdict : TLE

const int Max = 50000 +10 ;

int n, e, a, b, cur ;

vector < int > G[Max];

vector < bool > vis;

stack < int > stk ;

int Count[Max] = {0};

int ck ;

void fun (int x)
{

    stk.push( x );
    vis[x] = true ;

    while(!stk.empty())
    {
        cur = stk.top() ;
        stk.pop() ;

        //cout<<cur<<"  ";

        int sz = G[cur].size() ;

        for(int j = 0 ; j<sz ; ++j)
        {
            int k = G[cur][j];
            if(!vis[k])
            {
                ++ck ;
                vis[k] = true;
                stk.push(k);
            }
        }
        vis[cur] = true ;

    }

    //Count[x] = ck ;
}

int main()
{


  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cs;


    cin >> cs;

    for(int t=1 ; t<=cs ; ++t)
    {

        cin >> n ;

        vis.assign( n+2, false );
        for(int i =1 ; i<=n ; ++i)
        {
            cin >> a >> b;
            G[a].push_back(b);

        }


        //fun(5);
        //cout<<ck<<endl;


        int m = 0 ;
        for(int  i = 1 ; i<=n ; ++i)
        {
            ck = 0;
            fun(i);

            m = max(m,ck);
            //cout<<i<<"------"<<ck<<endl;
            Count[i] = ck ;
            vis.assign( n+2, false );

        }

        //cout<<"Max val "<<m<<endl;



        //cout<<m<<endl;
        cout<<"Case "<<t<<": ";
        for(int k=1; k<=n; ++k)
        {
            // cout<<i<<"----"<<Count[i]<<endl;
            if(Count[k]==m)
            {
                cout<<k<<endl;
                break ;
            }
        }

        memset(Count,0,sizeof(Count));
        for(int i=1; i<=n; ++i)
        {
            G[i].clear();
        }

    }
    return 0;
}


