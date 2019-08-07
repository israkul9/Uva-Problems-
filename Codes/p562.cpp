
#include<bits/stdc++.h>
using namespace std;

const int kMaxN =5010;
int  wt[120];
int m[kMaxN][110];
int n,W;

int kapsack(int x)
{
    W = x;
    for(int i=0; i<=W; i++)
    {
        m[i][0] = 0;
    }


    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=W; j++)
        {
            if(wt[i]>j)
            {
                m[i][j] = m[i-1][j];
            }
            else
            {
                m[i][j] = max(m[i-1][j], m[i-1][j-wt[i]]+wt[i]);
            }
        }
    }
    return m[n][W];
    memset(m,false,sizeof(m));
}

int main()
{

    int test;
    cin>>test;
    while(test--)
    {
        cin>>n;


        int sum = 0;
        for(int i=1; i<=n; i++)
        {
            cin>>wt[i];
            sum = sum + wt[i];
        }
        //cin>>W;
        int ans = kapsack(sum/2);
        cout<<sum - ans*2<<endl;

        memset(wt,false,sizeof(wt));

    }
    return 0;
}

























#include <iostream>
#include <cmath>

using namespace std;

int dp[50001][100], coins[100], n, tc;

int main()
{
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++)
            cin >> coins[i], sum += coins[i];

        int target = sum/2;
        for (int amount = 0; amount <= target; amount++)
            dp[amount][0] = 0;

        for (int coin = 1; coin <= n; coin++)
            for (int amount = 0; amount <= target; amount++)
                if (coins[coin] <= amount)
                    dp[amount][coin] = max(dp[amount][coin-1], coins[coin] + dp[amount-coins[coin]][coin-1]);
                else
                    dp[amount][coin] = dp[amount][coin-1];

        cout << sum - 2*dp[target][n] << endl;
    }
    return 0;
}



