
//Bismillah_hir_rahmanir_rahim



#include<bits/stdc++.h>
using namespace std;

vector < pair < double, pair < int, int > > > edges;

int fathers[150];
int n,m;
int a,b;
double w ;


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
double  MST()
{
    for(int i=0; i<150; i++)
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

            mst_edges++;
        }

        mst_ni++;
    }
    return mst_weight;
}


vector < pair < int, pair< double,double >  > > input ;

double x,  y ;



void khela_sesh()
{
    input.clear();
    memset(fathers,false,sizeof(fathers));
    edges.clear();
}

int main()
{

    int cs ;

    cin >> cs ;
   // cout<<endl;
    for(int f = 1 ; f<=cs ; f++)
    {



        cin >> n ;
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

        cout<<fixed<<setprecision(2)<<MST()<<endl;
        if(f<cs)
            cout<<endl;
        khela_sesh();
    }



    return 0 ;

}







