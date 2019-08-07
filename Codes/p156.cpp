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

string s ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector < string > vec ;

    map < string, int >mp;
    map < string, string > mp2;
    while (cin >> s, s != "#")
    {
        string t = s;

        //bug;
        // cout << t <<" ===";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(),s.end());
        vec.push_back( s );
        mp2[s] = t;
        mp[s]++;
        // vec.push_back(t);
        //cout << t <<endl;
        // bug;
        //  cout << s <<endl;
    }
    // bug;

    vector < string > distinct ;

    for(auto it = mp.begin(); it!=mp.end(); ++it)
    {
        if(it->second==1)
            distinct.push_back(it->first);
    }

    vector < string > ans ;

    for(auto it: distinct)
        ans.push_back( mp2[it] );
    //cout << mp2[it] <<endl;
    sort(ans.begin(),ans.end());
    // bug;
    for(auto it: ans)
        cout <<it<<endl;

    ans.clear();
    mp.clear();
    mp2.clear();
    distinct.clear();
    vec.clear();
    //  cout << mp2["Disk"];

//     for(auto it2 = mp2.begin();it2!=mp2.end();++it2)
//        cout << it2 -> first <<" "<<it2->second<<endl;

    return 0;
}



