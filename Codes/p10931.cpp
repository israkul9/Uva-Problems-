#include<bits/stdc++.h>
using namespace std;

vector<long long int>v;
multiset<long long int>s;

int main ()
{

    long long int n,mod;
    while (true)
    {
        scanf("%lld",&n);
        if(n==0) return 0;

        while (n>0)
        {
            mod = n%2;
            v.push_back(mod);
            s.insert(mod);
            n = n/2;
        }

        printf("The parity of ");
        for(int i=v.size()-1; i>=0; i--)
        {
            printf("%lld",v[i]);
        }
        printf(" is %lld (mod 2).\n",s.count(1));
        v.clear();
        s.clear();
    }
    return 0;
}
