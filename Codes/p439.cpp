
//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;

#define pii pair <int, int>

int fx[ ] = { 1, -1, 2, -2, 1, -1,  2, -2 };
int fy[ ] = { 2,  2, 1,  1, -2, -2, -1, -1 };


int dig ( char x)
{
    if(x=='a')
        return 1;
    else if(x=='b')
        return 2;
    else if(x=='c')
        return 3;
    else if(x=='d')
        return 4;
    else if(x=='e')
        return 5;
    else if(x=='f')
        return 6;
    else if(x=='g')
        return 7;
    else if(x=='h')
        return 8;

}
string str1, str2 ;

bool visited[100][100];
int cost[100][100];



void bfs( int a, int b, int c, int d )
{
    queue< pii >Q;
    //memset(visited,false,sizeof(visited));

    Q.push(make_pair(a,b));

    visited[a][b] = true;
    cost[a][b] = 0 ;



    while(!Q.empty())
    {
        pii top = Q.front() ;
        Q.pop() ;

        if(top.first==c and top.second==d)
        {
            cout<<"To get from "<<str1<<" to "<<str2<<" takes "<<cost[top.first][top.second]<<" knight moves.\n";
            return;
        }

        for(int i = 0 ; i<8; ++i)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];

            if((f>0 and f<=8) and (s>0 && s<=8) and visited[f][s]==false )
            {
                visited[f][s] = true;
                cost[f][s]=cost[top.first][top.second]+1;
                Q.push(make_pair(f,s));
            }

        }
    }


}



int main()
{

    while(cin>>str1>>str2)
    {

        memset(visited,false,sizeof(visited));
        memset(cost,0,sizeof(cost));
        int s1 = dig(str1[0]);
        int s2 = str1[1]-48 ;
        int d1 = dig(str2[0]);
        int d2 = str2[1]-48;

        bfs(s1,s2,d1,d2);
    }




    return 0;
}

