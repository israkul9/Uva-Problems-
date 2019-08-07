/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;


#define ll long long int
int const N = 3e5 + 10;
int const MOD = 1e9 + 7;
#define bug cout <<"-----------"<<endl



int main()
{
    //freopen("input.txt", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    for(int i = 1 ;; ++i)
    {

        string str ;

        cin >> str ;

        if(str=="*")
            break;

        if(str=="Hajj")
        {
            cout <<"Case "<<i<<": ";
            cout <<"Hajj-e-Akbar"<<endl;
        }
        else if(str=="Umrah")
        {
            cout <<"Case "<<i<<": ";
            cout <<"Hajj-e-Asghar"<<endl;

        }

    }

    return 0;
}



