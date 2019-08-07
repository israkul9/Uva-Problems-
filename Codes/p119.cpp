/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;


#define ll long long int
int const N = 3e5 + 10;
int const MOD = 1e9 + 7;
#define bug cout <<"-----------"<<endl

vector < string > Name ;
map < string,  int > got ;
map < string,  int > give ;

int main()
{
    //freopen("input.txt", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int people ;

    int flag = 1 ;
    while (cin >> people )
    {
        for(int i = 0 ; i<people ; ++i)
        {
            string str ;
            cin >> str ;
            Name.push_back(str);
        }
        for(int i = 1 ; i<=people ; ++i)
        {
            string s ;
            cin >> s ;
            int amount, t;
            cin >> amount ;

            cin >> t ;
            ll tot = 0 ;
            for(int j = 1; j<=t;  ++j)
            {
                string taken ;
                cin >> taken;
                got[ taken ] += (amount/t);
                tot+=(amount/t);
                taken.clear();

            }
            give[s] = tot;
            s.clear();

        }
        if (flag!=1)
            cout << endl;

        for(int i = 0 ; i<people; ++i)
            cout << Name[i]<<" "<< got[ Name[i] ] - give[ Name[i] ]<<endl;

        flag++;


        got.clear();
        give.clear();
        Name.clear();
    }
//    bug;
//for(auto it = give.begin();it!=give.end();++it)
//{
//    cout << it->first <<" "<<it->second<<endl;
//}
//
//bug;
//
//for(auto it = got.begin();it!=got.end();++it)
//{
//    cout << it->first <<" "<<it->second<<endl;
//}

    return 0;
}



