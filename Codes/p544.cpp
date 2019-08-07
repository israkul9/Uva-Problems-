//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;


const int MAX = 20000 ;

int city, road,s,y, minimumCost;

bool marked[MAX];

typedef pair< int, int > PII;

vector <PII> adj[MAX];

vector< int > val;

priority_queue< PII > Q;

int prim(int x, int des)
{
    memset(marked,false,sizeof(marked));
    minimumCost = 0;
    PII p;
    Q.push(make_pair(0, x));
    while(!Q.empty())
    {

        p = Q.top();
        Q.pop();
        x = p.second;

        if(marked[x] == true)
        {
            continue;
        }
        else
        {
            if(p.first>0)
                val.push_back(p.first);
                //cout<< p.first <<" ";
            minimumCost += p.first;
            marked[x] = true;
        }
        
        if(x==des)break;
        
        for(int i = 0; i < adj[x].size(); ++i)
        {
            y = adj[x][i].second;
            if(marked[y] == false)
            {
                Q.push(make_pair(adj[x][i].first,y));
            }
        }
    }
    return minimumCost;
}


map< string, int > indexOf;
map< string, int > :: iterator it ;


int main()
{

int cas = 1 ;
    while( cin >> city >> road )
    {


        int  citiesNum = 1;

        if(city+road==0)
            break;


        char c1[40], c2[40];
        int a, b, l;

        for(int i = 1 ; i<=road ; ++i)
        {
            memset(c1,false,sizeof(c1));
            memset(c2,false,sizeof(c2));
            scanf("%s%s%d", c1, c2, &l);
            if (indexOf.count(c1))
            {
                a = indexOf[c1];
            }
            else
            {
                a = citiesNum;
                indexOf[c1] = citiesNum++;
            }
            if (indexOf.count(c2))
            {
                b = indexOf[c2];
            }
            else
            {
                b = citiesNum;
                indexOf[c2] = citiesNum++;
            }

            // cout<<a<<"---"<<b<<endl;

            adj[a].push_back( make_pair(l,b));
            adj[b].push_back( make_pair(l,a));

        }


        cin >> c1 >> c2 ;

        int start = indexOf[c1];
        int destination = indexOf[c2];

        int ans = prim( start, destination );
       // cout<<"------"<<endl;

        for(int t = 0 ; t<=city+2; ++t)
        {
            adj[t].clear();
        }
        
        while(!Q.empty())
            Q.pop();
            
            sort(val.begin(),val.end());
            
            cout<<"Scenario #"<<cas<<endl;            
            cout<< val.front();
            val.clear();
            cout<<" tons"<<endl;
            cout<<endl;
            cas++;
        // cout<< start <<"-----"<<destination<<endl;

//    for(it = indexOf.begin() ; it!=indexOf.end() ; ++it)
//    {
//        cout<<it->first<<" "<<it->second<<endl;
//    }

    }

    return 0;


}





