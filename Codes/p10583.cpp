//Bismillah_Hir_Rahmanir_Rahim


#include<bits/stdc++.h>
using namespace std;


#define MX 50000+2

int parent[MX];
int rankParent[MX];


int ans;


void initializeSet(int n) 
{
    for(int i=1; i<=n; i++)
    {
        parent[i]=i;
        rankParent[i] = 0;
    }

}


int findParent(int x)
{
    if(x != parent[x])
    {
        parent[x] = findParent(parent[x]);
        return parent[x];
    }
    else
    {
        return x;
    }

}


void unionSet(int x,int y)
{
    int px = findParent(x);
    int py = findParent(y);


    if( px==py )
    {

        return;
    }

    else  if( rankParent[px]>rankParent[py] )
    {
        parent[py] = px;


    }
    else if ( rankParent[px]<rankParent[py] )
    {
        parent[px] = py;

    }
    else
    {
        parent[py] = px;
        rankParent[px] = rankParent[px]+1;
    }
    ans--;
}



int main()
{
    int test = 0;

    while(true)
    {
        int n;
        cin>>n;

        initializeSet(n);
        int cs;
        cin>>cs;

        if(n==0 && cs==0)
        {
            return 0;
        }

        ans = n;
        while(cs--)
        {

            int a,b;
            cin>>a>>b;
            unionSet(a,b);

        }
     
        test++;
        cout<<"Case "<<test<<": ";
        cout<<ans<<endl;

        memset(parent,0,sizeof(parent));
        memset(rankParent,0,sizeof(rankParent));

    }
    return 0;
}

