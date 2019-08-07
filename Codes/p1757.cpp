/// problem number : I , ICPC World Final 2017



//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;



int n, k, t;
char a, b ;
const int M = 200 ;

vector< int > adj[M] ;

vector< bool > vis ;

map < int, char  > mp1 ;

map < char, int  > mp2 ;


vector< char > store;
int gg = 0;
void dfs(int start)
{
    //cout<<mp1[start]<<" " ;

    if(gg!=start)
    {
        store.push_back(mp1[start]);
    }


    vis[start] = true ;

    for(int t = 0 ; t<adj[start].size() ; ++t)
    {
        int node = adj[start][t] ;
        if(!vis[node])
        {
            dfs(node) ;

        }
    }


}


int main()
{


    while ( cin >> n >> k)
    {

        for(int i = 1 ; i<=n ; ++i)
        {
            cin >> a >> b ;

            int x1 = int(a);
            int x2 = int(b);
            mp1[x1] = a ;
            mp1[x2] = b ;

            mp2[a] = x1;
            mp2[b] = x2;


            adj[x1].push_back(x2);

        }


        //  cin >> k ;
        string s1, s2 ;
        for(int cnt = 1 ; cnt<=k ; ++cnt)
        {
            vis.clear();
            vis.assign(400,false) ;
            store.clear() ;
            cin >> s1 >> s2 ;
            if(s1.length()==s2.length() and s1==s2)
            {
                cout<<"yes"<<endl;
            }
            else if(s1.length()!=s2.length())
            {
                cout<<"no"<<endl;
            }
            else
            {
                bool flag = false ;
                for(int j = 0 ; s1[j] ; ++j)
                {
                    if(s1[j]==s2[j])
                    {
                        flag = true ;
                        continue ;

                    }
                    else
                    {
                        gg = mp2[ mp1[ mp2[ s1[j] ] ] ];
                        vis.clear();
                        vis.assign(400,false) ;
                        store.clear();
                        dfs( mp2[ s1[j] ] );

                        sort(store.begin(),store.end());

                        if(binary_search(store.begin(), store.end(),s2[j]) )
                        {
                            //cout<<"yes"<<endl;
                            flag = true ;
                        }
                        else
                        {
                            flag = false;
                            break ;
                        }
                    }
                }
                if(flag)
                {
                    cout<<"yes"<<endl;
                }
                else
                {
                    cout<<"no"<<endl;
                }

            }
        }

        for(int i = 0; i<200; i++)
        {
            adj[i].clear() ;
        }
        mp1.clear();
        mp2.clear();

    }

    return 0;
}



/*


99 = c
116 = t
102 = f
101 = e


3
c t
t f
f e

*/


