//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;



map<int,int>mp;
map<int,int>::iterator it;



int main()
{
    int n,sum;
    int test = 0;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            return 0;
        }
        int arr[n];
        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
        }
        int query;
        int value;
        test++;
        cin>>query;
        cout<<"Case "<<test<<":"<<endl;
        for(int j=0; j<query; ++j)
        {
            cin>>value;


            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    //if(arr[i]!=arr[j])
                   // {
                        sum = arr[i]+arr[j];

                        mp.insert(pair<int,int>(abs(sum-value),sum));
                    //}


                }

            }
            it = mp.begin();



            cout<<"Closest sum to "<<value<<" is "<<it->second<<"."<<endl;

            mp.clear();
            sum = 0;


        }
    }
    return 0;
}

/// verdict : TLE




/*

#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>
 
using namespace std;
long int sum[1000010];
int main()
{
    long int n,m,i,j,k,range,number[1050],query,min,dist,t=0,close;
    //freopen("input.txt","r",stdin);
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        t+=1;
        for(i=0;i<n;i++)
            scanf("%ld",&number[i]);
        k=0;
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                sum[k++]=number[i]+number[j];
 
        scanf("%ld",&m);
        printf("Case %ld:\n",t);
        for(i=1;i<=m;i++)
        {
            scanf("%ld",&query);
            min=2147483647;
            for(j=0;j<k;j++)
            {
                dist=abs(query-sum[j]);
                if(min>dist)
                {
                    min=dist;
                    close=sum[j];
                }
            }
            printf("Closest sum to %ld is %ld.\n",query,close);
        }
 
    }
    return 0;
}
*/
/// verdict - AC
