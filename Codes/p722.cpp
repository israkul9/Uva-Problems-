#include<stdio.h>
#include <string.h>

#define bug  printf("-------\n")

const int maxn = 102;

int fun(char x, char y)
{
    int ss = 0;
    if (x == '0')
    {
        ss = y - 48;
    }
    else
    {
        ss = (x - 48) * 10 + (y - 48);
    }

    return ss;
}

char grid[maxn][maxn];

char input[maxn];

int ro = 0, col = 0;

bool visited[maxn][maxn];
int dx[] = {-100000, 0, 0, +1, -1};
int dy[] = {-100000,+1, -1, 0, 0};   //4 Direction Array

int ans = 0 ;

void dfs(int sx, int sy)
{
    visited[sx][sy] = true;
    int i ;
    for( i  = 1 ; i<=4 ; i++)
    {

        int nowx = sx + dx[i];
        int nowy = sy + dy[i];


        if( nowx >=0 and nowx<=99 and nowy>=0 and nowy<=99 )
        {
            if( !visited[nowx][nowy] and grid[nowx][nowy]=='0')
            {
                ans++;
                dfs(nowx,nowy);
                //grid[nowx][nowy]='*';
            }
        }
    }
}



int main()
{

    int t;
    scanf("%d", &t);
   // while(getchar() != '\n');

    while(t--)
    {


        int t,ni;

        for(t = 0 ; t<=maxn; t++)
        {
            for(ni =0 ; ni<=maxn; ni++)
            {
                grid[t][ni] = '\0';
                visited[t][ni] = false;
            }
        }

        char num1[2]= {'\0','\0'};
        char num2[2]= {'\0','\0'};


        scanf("%s",num1);




        int s1 = fun(num1[0], num1[1]);
        scanf("%s",num2);
        //cin >> num2[0] >> num2[1];

        int s2 = fun(num2[0], num2[1]);


        // bug;

        //  printf("%d %d\n",s1,s2);


        int k = 1;


        getchar();

        while ( gets(input) and strlen(input) > 0)
        {
            col = strlen(input);
            strcpy(grid[k], input);
            k++;
        }
        ro = k-1;

        ans = 0 ;

        dfs(s1-1,s2-1);

        printf("%d\n",ans);

        if(t)
           printf("\n");
    }

    return 0;
}

