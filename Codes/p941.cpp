//Bismillah_hir_rahmanir_rahim

/// verdict --- TLE


#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    unsigned long long int n,i;

    int cs;

    cin>>cs;
    cin.ignore();
    while(cs--)
    {

        cin>>str>>n;

        sort(str.begin(), str.end());

        i=0;

        if(n==0)
        {
            cout<<str<<endl;
        }
        else
        {
            while(std::next_permutation(str.begin(), str.end()))
            {
                i++;
                if(i==n)
                    cout<<str<<endl;
            }
        }
    }
    return 0;
}


