//Bismillah_hir_rahmanir_rahim

#include <bits//stdc++.h>
using namespace std;


#define inf (1<<30)-2
#define sz  25


int dist[sz][sz];
int no, edge;

void init()
{
    for(int i=1; i<=no; i++)
        for(int j=1; j<=no; j++)
        {
            dist[i][j]=inf;
            if(i==j)
            {
                dist[i][j]=0;
            }
        }
}

void FloydWarshal ()
{
    for(int k=1; k<=no; k++)
    {
        for(int i=1; i<=no; i++)
        {
            for(int j=1; j<=no; j++)
            {
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }

        }
    }
}

map < int, string> mp ;
map < int, int> mp2 ;
map < int, int> :: iterator it ;

int main()
{
    int kase = 1 ;
    while (cin>>no>>edge)
    {
        if(no==0 and edge==0)
            return 0 ;
        init();
        string str ;

        for(int i = 1 ; i<=no ; i++)
        {
            cin >> str ;
            mp[i] = str;
        }

        for(int i=1; i<=edge; i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            dist[u][v]=w;
            dist[v][u]=w;
        }

        FloydWarshal();

        int m = INT_MAX ;
        int index = 0 ;
        for(int i = 1 ; i<=no ; ++i)
        {
            int sum = 0 ;
            for(int j = 1 ; j<=no ; ++j)
            {
                sum += dist[i][j];
            }


            mp2[i] = sum ;
//        if(sum<m)
//        {
//            index = i ;
//            m = sum ;
//        }

            m = min(sum, m);
            //cout << i << " ----" << sum <<endl;
        }
        vector < int > vec ;
        for(it = mp2.begin(); it!=mp2.end(); ++it)
        {


            if(it->second==m)
                //cout << it->first <<"----"<<it->second<<endl;
                vec.push_back(it->first);
        }
        sort(vec.begin(),vec.end());
        int val = vec.front();
        cout <<"Case #"<<kase<<" : ";
        cout << mp[val] <<endl;
        kase++;
        vec.clear();
        mp2.clear();
        mp.clear();
        

    }
    return 0;
}


