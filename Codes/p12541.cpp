/*

BISMILLAH - HIR - RAHMANIR - RAHIM

*/

#include<bits/stdc++.h>
using namespace std;


#define ll long long int
int const N = 3e5 + 10;
int const MOD = 1e9 + 7;


struct Birthday
{
    string name ;
    int day ;
    int month ;
    int year ;

};

bool compare(Birthday y1, Birthday y2)
{
    if(y1.year==y2.year)
    {
        if(y1.month==y2.month)
        {
            return y1.day < y2.day;
        }
        else
        {
            return y1.month < y2.month;
        }
    }
    else
    {
        return y1.year < y2.year;
    }


}


int main()
{
    // freopen("input.txt", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str ;
    int people, d, m, y ;
    while ( cin >> people  )
    {

        Birthday data[people];

        for(int i = 0 ; i<people ; ++i)
        {
            cin >> str >> d >> m >> y;

            data[i].name = str ;
            data[i].day = d ;
            data[i].month = m;
            data[i].year = y ;
        }

        sort(data, data+people, compare);

//    cout <<"-------------------------"<<endl;
//    for(int i = 0 ; i<people ; ++i)
//    {
//
//        cout << data[i].name <<" "<< data[i].day <<" "<<data[i].month <<" "<<data[i].year<<endl;
//
//    }

        cout << data[people-1].name <<endl;
        cout << data[0].name <<endl;
        memset(data,false,sizeof(data));
    }
    return 0 ;
}



