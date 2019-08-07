//Bismillah_Hir_Rahmanir_Rahim


#include<bits/stdc++.h>
using namespace std;

string ch;
double value,d;

map<string,double>mp;
map<string,double>::iterator imp;


int main()
{
    int test;

    scanf("%d",&test);
    cin.ignore();
    cin.ignore();


    while(test--)
    {
        int t=0;
        while(getline(cin,ch)&& ch!="")
        {
            mp[ch]++;
            t++;
        }
        for(imp=mp.begin(); imp!=mp.end(); imp++)
        {
            d = (double)imp->second;
            value = ((d*100.00)/(double)t);
            cout<<imp->first;
            printf(" %.04lf\n",value);
        }
        if(test>0)
        {
            printf("\n");
        }
        mp.clear();
        ch.clear();

    }
    return 0;
}

