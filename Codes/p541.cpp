
//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    while(cin >> n )
    {
        if(n==0)
            break;

        int bx[n+1][n+1]= {0};
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                bx[i][j] = 0;
            }
        }

        int row, col, sumr = 0, sumc=0;
        int ll1 = 0, ll2 = 0;
        int a=0,b=0;
        for(int i =1; i<=n; i++)
        {
            row = 0;

            for(int j = 1; j<=n; j++)
            {
                cin >> bx[i][j];
                row += bx[i][j];
            }

            if(row%2!=0)
            {
                ll1++;
                a = i;
            }
            sumr += row;
        }




        for(int t=1 ; t<=n ; ++t)
        {
            col = 0;

            for(int i = 1; i<=n ; i++)
            {

                col += bx[i][t];

            }
            if(col%2!=0)
            {
                ll2++;
                b = t;
            }
            sumc += col;
        }

        // cout<<sumr<<"----"<<sumc<<endl;

        if(sumr%2==0 and sumc%2==0 and a==0 and b==0)
        {
            cout<<"OK"<<endl;
        }
        else if(a!=0 and b!=0 and ll1==1 and ll2==1)
        {
            cout<<"Change bit ("<<a<<","<<b<<")"<<endl;
        }
        else
        {
            cout<<"Corrupt"<<endl;
        }
    }
    return 0;
}
