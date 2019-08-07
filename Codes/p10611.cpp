
/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll n,val,one,two;

    while (cin >> n )
    {

        vector < ll > vec ;

        for(int i = 0 ; i<n ; ++i)
        {
            cin >> val;
            vec.push_back( val );

        }

        int query ;

        cin >> query ;

        while(query--)
        {
            ll key ;
            cin >> key ;

            bool f1 = false, f2 = false;

            for(int i = 0 ; i<n ; i++)
            {
                if(vec[i]<key)
                {
                    f1 = true;
                    one = vec[i];
                    continue ;
                }
                else
                {
                    break ;
                }

            }
            if(f1)
                cout << one ;
            else
                cout<<"X";
            for(int i = 0 ; i<n ; i++)
            {
                if(vec[i]>key)
                {
                    f2 = true;
                    two = vec[i];
                    break;
                }
                else
                    continue;
            }
            if(f2)
                cout <<" "<< two <<endl;
            else
                cout <<" "<< "X" <<endl;
        }
        vec.clear();
    }

    return 0;
}
