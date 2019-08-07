/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MAX 2268312229760322080

// No Copyright--You can copy and paste it without my permission......... (Wink Emoji)
// Break up but Never Give Up



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while (scanf("%d", &n), n)
    {
        priority_queue<int, vector<int>, greater<int> > q;

        while (n--)
        {
            int x;
            scanf("%d", &x);
            q.push(x);
        }

        int total = 0, cost = 0;
        while (q.size() > 1)
        {
            total = q.top();
            q.pop();
            total += q.top();
            q.pop();
            cost += total;
            q.push(total);
        }

        printf("%d\n", cost);
    }
    return 0;
}

