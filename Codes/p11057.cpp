
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[100000],i,j,n,b1,b2,balance,c,d;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        scanf("%d",&balance);
        int f=0;
        for (i=n; i>0; i--)
        {
            for(j=i+1; j>0; j--)
            {
                if(arr[i]+arr[j] == balance )
                {
                    printf("Peter should buy books whose prices are %d and %d.\n\n",arr[i],arr[j]);
                    f++;
                    break;
                }
            }
            if(f==1)break;
        }
    }


    return 0;
}








#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>in;
int main()
{
    int n,a,m;
    while(scanf("%d",&n)!=EOF)
    {
        int minDes= 1000001,fbookv,sbookv;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a);
            in.push_back(a);
        }
        scanf("%d\n",&m);
        sort(in.begin(),in.end());
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(in[i]+in[j]==m&&abs(in[i]-in[j])<minDes)
                {
                    fbookv=in[i];
                    sbookv=in[j];
                    minDes=abs(in[i]-in[j]);
                }
            }

        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",fbookv,sbookv);
        in.clear();
    }
    return 0;
}

