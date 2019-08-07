
//Bissmillah_hir_rahmanir_rahim

#include<bits/stdc++.h>

#define WHITE 1
#define GREY 2
#define BLACK 3

using namespace std;


int n,e;
int mat[100][100];
int color[100];
//int start[100];
//int finish[100];
//int t=0;


stack<int>TopSortStack;

void dfs(int value)
{
    int i,j;
    color[value] = GREY;
//    t++;
//    start[value] = t;
    for(i=1; i<=n; i++)
    {
        if(mat[value][i] == 1 && color[i] == WHITE )
        {
            dfs(i);
        }
    }
    color[value] = BLACK;
//    t++;
//    finish[value] = t;
    TopSortStack.push(value);
}

void check ()
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        if(color[i] == WHITE)
        {
            dfs(i);
        }
    }
}


int main()
{
    while(true)
    {
        int i,j;
        //printf("Total Node:\n");
        cin>>n;
        cin>>e;

        if(n==0 && e==0)
        {
            break;
        }

        for(i=1; i<=n; i++)
        {
            color[i] = WHITE;
        }
        //printf("Total Edge:\n");

        int node1,node2;
        for(i=1; i<=e; i++)
        {
            cin>>node1>>node2;
            mat[node1][node2] = 1;
        }

        check();

//    cout<<"Start and Finish Time: "<<endl;
//    for(i=1; i<=n; i++)
//    {
//        cout<<"Node :"<<i<<"->"<<start[i]<<"/"<<finish[i]<<endl;
//    }

        int sz = TopSortStack.size();
       // cout<<"Topologically Sorted node:"<<endl;
        while(!TopSortStack.empty())
        {

            cout<<TopSortStack.top();
            TopSortStack.pop();
            if(sz - 1>0)
            {
                cout<<" ";
                sz--;
            }
        }
        cout<<endl;

        memset(mat,0,sizeof(mat));
        memset(color,0,sizeof(color));
    }
    return 0;
}

