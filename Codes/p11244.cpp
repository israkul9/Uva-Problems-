#include<iostream>
#include<queue>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
const int size1 = 500+5 ;
int X[8]= {-1,-1,-1,0,0,1,1,1};
int Y[8]= {-1,0,1,-1,1,-1,0,1};
char mat[size1][size1];
int color[size1][size1],n,m;
int  bfs(int i,int j)
{
    int ux,uy,vx,vy,k;
    queue<int>Q;
    color[i][j]=1;
    Q.push(i);
    Q.push(j);
    int p=0,q=0;
    while(!Q.empty())
    {
        ux=Q.front();
        Q.pop();
        uy=Q.front();
        Q.pop();
        for(k=0; k<8; k++)
        {
            vx=ux+X[k];
            vy=uy+Y[k];
            if(vx>=1 && vx<=n && vy>=1 && vy<=m && mat[vx][vy]=='*')
            {
                if(color[vx][vy]==0)
                {
                    color[vx][vy]=1;
                    q++;
                    Q.push(vx);
                    Q.push(vy);
                }
            }
        }
    }
    if(q==0)
    {
        p++;
    }
    return p;

}


int main()
{


    int i,j,cou;
    while(scanf("%d %d",&n,&m)&&n&&m)
    {
        getchar();
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf(" %c",&mat[i][j]);
            }
        }
        cou=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(mat[i][j]=='*'&&color[i][j]==0)
                {
                    cou +=bfs(i,j);
                }
            }
        }
        printf("%d\n",cou);
        memset(color,0,sizeof(color));
        memset(mat,'\0',sizeof(mat));

    }
    return 0;
}

