///Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;

vector<long long int>s1;

int main()
{
    while(1)
    {
        long long int n1,n2,value;
        scanf("%lld %lld",&n1,&n2);

        if(n1==0 && n2==0)
        {
            break;
        }

        for(int i=1; i<=n1; ++i)
        {
            scanf("%lld",&value);
            s1.push_back(value);
        }
        long long  int ck=0;
        for(int j=1; j<=n2; ++j)
        {
            scanf("%lld",&value);
            if(binary_search(s1.begin(),s1.end(),value))
            {
                ck++;
            }
        }

        printf("%lld\n",ck);
        s1.clear();
    }
    return 0;
}
