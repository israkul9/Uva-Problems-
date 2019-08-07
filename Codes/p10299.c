
#include<bits/stdc++.h>
using namespace std;

/*

#define MAX  20000005
bool  prime [MAX+20];


vector<long long>primeList;
long long Vsize;

void sieve()
{
    for(long long  i=4; i<=MAX; i+=2)
        prime[i]=1;
    int srt = sqrt(MAX);
    for(long long  i=3; i<=srt; i+=2)
    {
        if(prime[i]==0)
        {
            for(long long  j=i*i; j<=MAX; j+=2*i)
            {
                prime[j]=1;
            }
        }
    }
    prime[0]=prime[1]=1;

    for(long long  i=2; i<=MAX; i++)
    {
        if(prime[i]==0)
        {
            primeList.push_back(i);
        }
    }

    Vsize = primeList.size();

}
*/

long long int phi (long long int n)
{
    long long tus=0;
    if(n==1)
    {
        return tus;

    }
    else
    {
        long long int  ret = n;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    n /= i;
                }
                ret -= ret / i;
            }
        }

        if (n > 1) ret -= ret / n;
        return ret;
    }
}



int main()
{
//     sieve();

    long long input;
    while (cin>>input)
    {
        if(input == 0)return 0;
        long long  res = phi(input);
        cout<<res<<endl;
    }
    return 0;

}


