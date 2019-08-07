/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    map < int, int > mp ;
    map < int, int > ::iterator it ;

    int n ;
    while(cin >> n )
    {
        if(n==0){
            return 0;
        }

        int tmp = n ;
        vector < int > l, r ;
        bool ok = false;
        while(n--)
        {
            int val1, val2;
            cin >> val1 >> val2 ;
            l.push_back(val1);
            r.push_back(val2);
        }

        sort(l.begin(),l.end());
        sort(r.begin(),r.end());

        for(int i = 0 ; i<tmp ; ++i)
        {
            if(l[i]==r[i])
            {
                continue;
            }
            else
            {
                ok = true;
                break;
            }
        }

        if(!ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        l.clear(), r.clear();
    }
    return 0;
}

