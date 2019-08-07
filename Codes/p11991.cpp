//Bismillah_Hir_Rahmanir_Rahim


#include<bits/stdc++.h>
using namespace std;

vector<int> a[1000001];

int main()
{

    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        int k,v,x,i;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&x);
            a[x].push_back(i);
        }
        for(i=1; i<=m; i++)
        {
            scanf("%d%d",&k,&v);
            if(a[v].size()<k)
                printf("0\n");
            else
                printf("%d\n",a[v][k-1]);
        }
    }
    return 0;
}


