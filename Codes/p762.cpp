



#include<bits/stdc++.h>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3


const int M = 700;
const long long int INF = 1000000000;
vector < int > G[M];

vector < int >  show, dis,parent, vis;


map < string, int > mp;
map < string, int >  ::iterator it;

map < int,  string > mp1;


int n, x, y, s, d;

queue< int > q;


void Reset()
{
    vis.clear();
    show.clear();
    mp1.clear();
    mp.clear();
    for(int i = 0; i <M; i++)
        G[i].clear();
}


void Horlicks(int start)
{

    parent[start] = -1;
    dis[start] = 0;
    q.push(start);
    for( ; q.empty()==false ; )
    {
        int f = q.front();
        q.pop();
        vis[f] = GRAY;



        for(int t = 0; t<G[f].size() ; ++t)
        {

            int child = G[f][t] ;
            if(vis[child]==WHITE)
            {
                //cout<<child<<" ";
                vis[child] = GRAY;
                q.push(child);
                dis[child] = dis[f] + 1;
                parent[child] = f;
            }
        }

        vis[f] = BLACK;
    }

}



int main()
{

   int tc = 0;
    while(cin >> n)
    {
        if(tc>0) puts(""); tc++;
        vis.assign(M, WHITE);
        parent.assign(M, -1);
        dis.assign(M, INF);


        char s1[3], s2[3] ;
//    string s1, s2 ;


        for(int i = 1 ; i<=n; ++i)
        {
            //cin >> s1 >> s2;
            scanf("%s %s", &s1, &s2);
           
           
            x = (s1[0] - 'A' )*26 + s1[1] - 'A' ;
            y  =  (s2[0] - 'A' )*26 + s2[1] - 'A' ;


            mp[s1] = x;
            mp[s2] = y;
            mp1[x] = s1;
            mp1[y] = s2;
            G[x].push_back(y);
            G[y].push_back(x);
            // cout<<x<<"----"<<y<<endl;
            memset(s1,false,sizeof(s1));
            memset(s2,false,sizeof(s2));

        }

        scanf("%s %s", &s1, &s2);
         //cout<<"----"<<endl;
        s = (s1[0] - 'A' )*26 + s1[1] - 'A' ;
        d  =  (s2[0] - 'A' )*26 + s2[1] - 'A' ;

        Horlicks(s);

        
        if( dis[d]==INF )
        {
            puts("No route");
        }
        else
        {
            stack< int > st;
            st.push(d);
            for( ; ;)
            {
                int t = parent[d];
                st.push(t);
                if(parent[t]==-1)
                    break;
                d = t;
            }
            while(!st.empty())
            {
                show.push_back(st.top());
                st.pop();
            }
            for(int i = 0; i<show.size()-1; ++i)
            {
                cout<<mp1[show.at(i)]<<" "<<mp1[show.at(i+1)]<<endl;
            }
        }
        //cout<<endl;

        Reset();
    }


    return 0;
}
