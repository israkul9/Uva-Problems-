
//Bismillah_hir_rahmanir_rahim


//#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
using namespace std;

vector < pair < double, pair < int, int > > > edges;

int fathers[1020];
int n,m;
int a,b;
double w  , high;
int cnt;

 double road , rail  ; 

int find(int x)
{
    if(fathers[x] == x)
    {
        return x;
    }
    return find(fathers[x]);
}

void unite(int x, int y)
{
    int fx = find(x);
    int fy = find(y);
    fathers[fx] = fy;
}
void MST()
{
   cnt = 0 ;
    for(int i=0; i<n+10; i++)
    {
        fathers[i]=i;
    }
    double mst_weight = 0;
    int  mst_edges = 0;
    int	mst_ni = 0;

    sort(edges.begin(),edges.end());

    while( ( mst_edges < n-1) || (mst_ni < m) )
    {

        a = edges[mst_ni].second.first;
        b = edges[mst_ni].second.second;
        w = edges[mst_ni].first;

        if( find(a) != find(b) )
        {

            unite(a,b);

            mst_weight += w;
            
            if(w<=high)
            {
                cnt++;
              road+=w;
            }
            else
            {
                rail+=w;
            }
            
           // flag.push_back(w);

            mst_edges++;
        }

        mst_ni++;
    }
   // return mst_weight;
}


vector < pair < int, pair< double,double >  > > input ;

double x,  y ;



void khela_sesh()
{
    input.clear();
    memset(fathers,false,sizeof(fathers));
    edges.clear();
    rail = 0 , road = 0 ;
}

int main()
{

    int cs ;

    cin >> cs ;
  //  cout<<endl;
    for(int f = 1 ; f<=cs ; f++)
    {



        cin >> n >> high ;
        m = n;

        for(int i = 1 ; i<=n ; ++i)
        {
            cin >> x >> y ;
            input.push_back( make_pair(i,make_pair(x,y)) );
        }


        for(int i = 0 ; i<input.size(); i++)
        {
            for(int j = i+1 ; j<input.size(); j++)
            {
                double weight,aa,bb;
                int node1, node2 ;

                node1  =  input[i].first;
                node2 = input[j].first ;
                double x1, y1 ;
                x1  = input[i].second.first ;
                y1 = input[i].second.second ;
                double x2, y2 ;
                x2 = input[j].second.first ;
                y2 = input[j].second.second;
                aa = abs(x1-x2), bb = abs(y1-y2);
                aa = pow(aa,2), bb = pow(bb,2);
                weight = sqrt(aa + bb);

                edges.push_back( make_pair(weight,make_pair(node1,node2)) );
                edges.push_back( make_pair(weight,make_pair(node2,node1)) );
            }
        }
        MST();
        cout<<"Case #"<<f<<": ";
        //cout<< n - cnt <<" "<<floor(road)<<" "<<floor(rail)<<endl;
        printf("%d %.f %.f\n", n-cnt, road, rail);
      //  cout<<fixed<<setprecision(2)<<MST()<<endl;
        
        khela_sesh();
        
     
   }



    return 0 ;

}







