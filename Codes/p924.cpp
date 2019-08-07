//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3
using namespace std;

int adj[2500+10][2500+10];
int frnd[16];

int total_node,i,j,k,n,day,siz,day1,siz1,a,b,c;

int color[2500+10];

void bfs (int Starting_Node)
{

    for( i=0; i<total_node; i++) {
        color[i]=WHITE;
    }
    queue<int>q,q1;
    q.push(Starting_Node);
    while(!q.empty()) {
        siz=0;
        while(!q.empty()) {
            int x = q.front();
            color[x]=BLACK;
            q.pop();
            for (i=0; i<total_node; ++i) {
                if(adj[x][i]==1 &&color[i]==WHITE) {
                    q1.push(i);
                    if(color[i]==WHITE)
                        siz=siz+1;
                    color[i]=BLACK;
                }
            }
        }
        if(q.empty()) {
            day+=1;
            q=q1;
            while(!q1.empty())
                q1.pop();
        }
        if(siz>siz1) {
            day1=day;
            siz1=siz;
        }
    }
    if(siz1==0)
        cout<<"0"<<endl;
    else
        
    cout<<siz1<<" "<<day1<<endl;
    while(!q.empty())
        q.pop();
    while(!q1.empty())
        q1.pop();
        memset(color,0,sizeof(color));
        day=0;
        day1=0;
        siz1=0;
}



int main()
{

    scanf("%d",&total_node);

    for(i=0; i<total_node; i++) {

        scanf("%d",&n);
        for(j=0; j<n; j++) {
            scanf("%d",&frnd[j]);

            adj[i][frnd[j]]=1;

        }
    }
    cin>>a;
    for(c=0;c<a;c++)
    {
        cin>>b;
        bfs(b);
    }



    return 0;
}
