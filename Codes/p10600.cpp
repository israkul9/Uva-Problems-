This is a MST problem. Both prim and kruskal should pass the time limit. The first part of  the output is simply the  minimum spanning tree. The second part can be found out by removing each edge of the MST and then finding the MST of the residual graph. 
When you remove the nth edge, you should put back the (n-1)th edge which you removed in the previous call. The second output is thus the minimum of the MST values of the residual graphs.
If you think carefully you should realize that you have to call a total of n MST functions, where n indicates the total number of nodes.
One for the main MST and (n-1) of them for the residual graphs.
Notes by Reinaldo Astudillo:
To find the second MST you do not have to physically remove each edge of first MST, just change its weight to a substantially big number (eg 300), and run Kruskal algorithm.

#include<bits/stdc++.h>
using namespace std;

int rep[100005];
vector<int>va;
int edg;
int a[100005];
struct edge
{
    int a, b, c;
} arr[100005];

bool cmp( edge x, edge y )
{
    return x.c < y.c;
}

void makeset(int n)
{
    for(int i=1; i<=n; i++)
        rep[i]=i;
}

int findr( int x )
{
    if( rep[x] == x )
        return x;
    return rep[x] = findr( rep[x] );
}

int unio(int i,int sum)
{
    int x,y;
    x = findr( arr[i].a );
    y = findr( arr[i].b );
    if( x != y )
    {
        rep[x] = y;
        va.push_back(i);
        sum += arr[i].c;
    }
    return sum;
}

int unio2(int i,int sum)
{
    int x,y;
    x = findr( arr[i].a );
    y = findr( arr[i].b );
    if( x != y )
    {
        rep[x] = y;
        sum += arr[i].c;
        edg++;
    }
    return sum;
}

int main()
{

    int cs ;

    cin >> cs ;
    while(cs--)
    {
        int n, m;
        cin >> n >> m;

        makeset(n);

        for( int i = 0; i < m; i++ )
        {
            int a, b, c ;
            cin >> a >> b >> c;
            arr[i].a = a;
            arr[i].b = b;
            arr[i].c = c;
        }

        sort( arr, arr+m, cmp );

        int sum=0;
        for(int i=0; i<m; i++)
        {
            sum=unio(i,sum);
        }

        cout <<sum << " "; //cost

        int sec_best_mst=INT_MAX/3;

        // cout<<"All other spanning trees:\n";

        sum=0;
        int j;
        for(j=0; j<va.size(); j++)
        {
            makeset(n);
            edg=0;
            for(int i=0; i<m; i++)
            {
                if(i==va[j])
                    continue;
                sum=unio2(i,sum);
            }
            if(edg!=n-1)
            {
                sum=0;
                continue;
            }
            // cout<<sum<<"-----\n" ;
            if(sec_best_mst>sum)
            {
                sec_best_mst = sum;
            }

            sum=0;
        }
        

        cout<<sec_best_mst<<endl;
        va.clear();
        memset(a,false,sizeof(false));
        memset(rep,false,sizeof(false));
        memset(arr,false,sizeof(false));
    }
    return 0;
}

