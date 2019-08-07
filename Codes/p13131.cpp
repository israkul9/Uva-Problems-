

///TLE code

#include<bits/stdc++.h>
using namespace std;


int main()
{

    long long int n, k,sum;
    int test;
    scanf("%d",&test);
    for(int j=1; j<=test; j++)
    {
        sum = 0;
        scanf("%lld %lld",&n,&k);
        for (int i=1; i<=n; i++)
        {
            if(n%i==0 && i%k!=0)
            {
                sum = sum +i;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}





/// AC code






#include<bits/stdc++.h>
using namespace std;


vector<long long int>divisor;
int main()

{

    long long int n,k,i,t,sum,test;

    cin>>test;
    sum = 0;

    for(int q=1; q<=test; q++)
    {
        scanf("%lld",&n);
        scanf("%lld",&k);
        sum = 0;
        for( i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                divisor.push_back(i);
                if(i*i != n)
                {
                    divisor.push_back(n/i);
                }
            }
        }

        sort( divisor.begin(),divisor.end() );

        for(t=0; t<divisor.size(); t++)
        {
            if( divisor [t] % k != 0 )
            {
                //printf("%d ",divisor[t]);
                sum = sum + divisor[t];

            }
        }
        cout<<sum<<endl;

        divisor.clear();
    }

    return 0;
}
