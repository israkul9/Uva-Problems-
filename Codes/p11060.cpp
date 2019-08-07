//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;

map< string, int >mp;


map<int,string>mp1;
int indeg[150],visit[150];


priority_queue< int, vector<int>, greater<int> > q;
vector<int>mat[150];

map< int, string >::iterator it;

vector<string>output;

int main ()
{
    int n,i,j,k,test=0;
    string str,a,b;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>str;
            mp[str]=i;
            mp1[i]=str;

        }

        memset(visit,0,sizeof(visit));
        memset(indeg,0,sizeof(indeg));

        int edge;
        cin>>edge;
        for(i=0; i<edge; i++)
        {

            cin>>a>>b;
            mat[mp[a]].push_back(mp[b]);
            indeg[mp[b]]++;
        }

        for(it = mp1.begin(); it!=mp1.end(); it++)
        {
            if(indeg[it->first]==0 && visit[it->first]==0)
            {

                q.push(it->first);
                visit[it->first] = 1;
            }
        }


        while(!q.empty())
        {
            int item = q.top();
            q.pop();


            output.push_back(mp1[item]);


            for(i=0; i<mat[item].size(); i++)
            {
                int t = mat[item][i];

                if(visit[t]==0)
                {
                    indeg[t]--;
                    if(indeg[t]==0)
                    {
                        q.push(t);
                        visit[t]=1;
                    }
                }
            }

        }

        test++;
        cout<<"Case #"<<test<<": Dilbert should drink beverages in this order:";
        for( i=0; i<output.size(); i++)
        {
            cout<<" "<<output[i];
        }
        cout<<"."<<endl;
        cout<<endl;
        mp.clear();
        mp1.clear();
        for(i=0; i<150; i++)
        {
            mat[i].clear();
        }

        output.clear();
    }

    return 0;
}
