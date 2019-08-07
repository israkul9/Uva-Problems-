
///TLE solution

#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector< int>v;

int gcd( int a, int b)
{
    if(b%a == 0)return a;
    return gcd(b%a,a);
}

int main()
{
    int n,test,x;
    scanf("%d",&test);
    for(x=1; x<=test; x++)
    {
        scanf("%d",&n);
        for( int i=1; i<=n; i++)
        {
            for( int j=i+1; j<=n; j++)
            {
                v.push_back(gcd(i,j));
            }
        }
        sort(v.begin(),v.end());
        printf("%d\n",v[v.size()-1]);
    }

    return 0;
}





/// AC solution


#include<bits/stdc++.h>

using namespace std;



int main()
{
    long long int n,test,x;
    scanf("%lld",&test);
    for(x=1; x<=test; x++)
    {

        scanf("%lld",&n);
        printf("%lld\n",n/2); // or n/2
    }



    return 0;
}


/*
proof:
Note that the required greatest gcd is for two number i != j.
Since the gcd of the number n and n/2 (if n is even) is n/2 and it's the  largest gcd of the number n ever for any other number i: 1<=i<n.
        If the number is odd then the the greatest gcd of this number and any smaller number is at most sqrt(n)(if the number has already an integer sqrt). and because for any number k>1: (k-1)/2 is always greater than sqrt(k)(if the number has already an integer sqrt). then:
        the Solution is floor(n/2)
*/
