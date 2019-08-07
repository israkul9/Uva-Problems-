
#include <bits/stdc++.h>
using namespace std;
#define sz  21
#define ll long long int
#define inf (1<<30)-2


int dist[sz][sz];
int no, edge;

void init()
{
    for(int i=1; i<=20; i++)
        for(int j=1; j<=20; j++)
        {
            dist[i][j]=inf;
            if(i==j)
                dist[i][j]=0;
        }
}

int main()
{
    int kase = 0 ;
    int x ;
    while(scanf("%d",&x)==1)
    {
        int i, j, k;
        init();

        for(i=1; i<=19; i++)
        {
            if(i!=1)
            {
                int val ;
                scanf("%d",&x);
            }
            for(int t = 0 ; t<x ; ++t)
            {
                int v ;
                scanf("%d",&v);
                dist[i][v] = 1 ;
                dist[v][i] = 1;
            }

        }
        for(k=1; k<=20; k++)
        {
            for(i=1; i<=20; i++)
            {
                for(j=1; j<=20; j++)
                {
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }

            }
        }

        int q;
       scanf("%d", &q);
        printf("Test Set #%d\n", ++kase);
        while(q--) {
            scanf("%d %d", &i, &j);
            printf("%2d to %2d: %d\n", i, j, dist[i][j]);
        }
        puts("");

    }
//
//    printf("Shortest distance between every pair of vertices\n");
//    for(i = 1 ; i<=20; i++)
//    {
//        for(j = 1 ; j<=20 ; j++)
//        {
//            if(dist[i][j]==inf)
//                cout << "INF" <<endl;
//            else
//                cout << i <<" theke "<<j <<" te jabar cost " << dist[i][j] << endl;
//        }
//    }
    return 0;
}

