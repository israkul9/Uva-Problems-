/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long int
int const N = 3e5 + 10;
int const MOD = 1e9 + 7;
#define bug cout <<"-----------"<<endl
#define MAX 2268312229760322080

int arr[N];

/// binary search + bisection method

int n ;
bool isValid(int mid)
{

    int now = 0 ;

    for(int i = 0 ; i<n ; ++i)
    {
        int len = arr[i] - now ;
        if(mid == len)
        {
            mid--;
        }
        else if(len>mid)
        {
            return false;
        }

        now = arr[i] ;
    }
    return true ;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int kase ;

    cin >> kase ;

    for(int cs = 1 ; cs<=kase; ++cs)
    {
        int MXXX = MAX;

        cin >> n ;
        for(int i = 0 ; i<n ; ++i)
        {
            cin >> arr[i];
        }
        int low = 1, high = 1e8;

        while(low<=high)
        {
            int mid = (low+high)/2 ;
            if(isValid(mid))
            {

                MXXX = min(mid,MXXX);
                high = mid - 1;
            }
            else
            {
                low = mid + 1 ;
            }
        }
        cout <<"Case "<<cs<<": "<<MXXX<<endl;
    }
    return 0;
}



