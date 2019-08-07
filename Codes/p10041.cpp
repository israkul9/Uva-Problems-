//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;

vector<int>vec;

int main()
{

    int test;
    cin>>test;
    while(test--)
    {


        int house;
        cin>>house;

        int arr[house];
        for(int i=0; i<house; ++i)
        {
            cin>>arr[i];

        }
        sort(arr,arr+house);

        for(int i=0; i<house; i++)
        {
            int sum = 0;
            for(int j=0; j<house; j++)
            {

                sum = sum+ abs(arr[i]-arr[j]);
            }
            vec.push_back(sum);
        }
        sort(vec.begin(),vec.end());
        cout<<vec[0]<<endl;
        vec.clear();
        memset(arr,0,sizeof(arr));
    }
    return 0;
}

