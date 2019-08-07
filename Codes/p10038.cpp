
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,val,cnt;

    while (scanf("%d",&n)!=EOF)
    {
        bool x = false;
        if(n==1)
        {
            x = true;
        }
        int arr[3000];


        for(j=0; j<n; ++j)
        {
            scanf("%d",&val);
            arr[j]=val;

        }

        int v[n-1];

        int t=0;
        for(i=1; i<=n-1; i++,t++)
        {
            v[t]=i;

        }


        vector<int>c;

        cnt = 0;
        for(k=0; k<n-1; ++k)
        {
            c.push_back(abs(arr[k]-arr[k+1]));

        }
        sort(c.begin(),c.end());


        for(k=0; k<c.size(); k++)
        {
            if(c[k]==v[k])
            {
                ++cnt;
            }
            else
            {
                break;
            }
        }

        if(cnt==n-1  || x==true)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }

        c.clear();
        memset(arr,false,sizeof(arr));
        memset(v,false,sizeof(v));
    }

    return 0;
}
