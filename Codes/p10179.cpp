//Bismillah_hir_rahmanir_rahim



#include<bits/stdc++.h>
using namespace std;


int phi (int n)
{
    int result = n;
    for (int i=2; i*i<=n; ++i)
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{


    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(1)
    {
        int num;
        cin>>num;
        if(num==0)break;
        cout<<phi(num)<<endl;

    }




    return 0;
}

