/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll k, n ;

ll arr[1009];
ll s  ;
bool Okey(ll cap)
{
    if(s <= cap)
        return true;

        ll sum = 0 ;
        ll ck = 1 ;
        for(int i=0 ; i<n ; ++i)
        {
            if(arr[i]>cap )return false;
            sum+=arr[i];
            if(sum > cap)
            {
                ck++;
                sum=0;
                sum+=arr[i];
            }
        }

         if(cap>=k and ck<=k)
            return true;
        else
            return false;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (cin >> n >> k )
    {
        s = 0;
        vector <ll> ans ;

        ll val ;

        for(int i = 0 ; i<n ; ++i)
        {
            cin >> val;
            arr[i] = val;
            s+=val;
        }

        ll high =  1000000000;
        ll low = 1;

        while(low<=high)
        {
            ll mid = (high+low)/2 ;
            // cout <<"high:--"<< high <<" low : "<<low <<"  Mid --" << mid<<endl ;

            if( Okey(mid) )
            {

                // cerr <<"under okey function "<<endl;
                // cout << mid <<" ";
                ans.push_back(mid);
                high = mid - 1 ;
            }
            else
            {
                low = mid + 1 ;
            }
        }

        sort(ans.begin(),ans.end());
        cout << ans.front() <<endl;
        ans.clear();
        memset(arr,false,sizeof(arr));
    }
    return 0;
}
