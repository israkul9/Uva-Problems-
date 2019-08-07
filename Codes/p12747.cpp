
//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;

int s1[262144];
int s2[262144];
int main()
{
    int test;
    cin>>test;
    for(int cas=1; cas<=test; cas++)
    {

        int ins = 1, del = 1;
        int len1;
        cin>>len1;
        for(int i=0; i<len1; i++)
        {
            cin>>s1[i];
        }

        int len2 = len1;

        for(int i=0; i<len2; i++)
        {
            cin>>s2[i];
        }


         int arr[len1+1][len2+1];

        //vector<int>arr[len1+2];
        for(int i=0; i<=len1; i++)
        {
            arr[i][0]=i;
        }

        for(int j=0; j<=len2; j++)
        {
            arr[0][j]=j;
        }
        for(int i=1; i<=len1; i++)
        {
            for(int j=1; j<=len2; j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    arr[i][j] = arr[i-1][j-1];
                }
                else
                {
                    arr[i][j] =  min(arr[i-1][j]+ins,arr[i][j-1]+del);
                }
            }
        }
        cout<<"Case "<<cas<<": ";

        cout<<arr[len1][len2]<<endl;
      // arr.clear();
         memset(arr,0,sizeof(arr));
        memset(s1,0,sizeof(s1));
        memset(s2,0,sizeof(s2));

    }
    return 0;
}
