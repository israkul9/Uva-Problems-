///TLE code

#include<bits/stdc++.h>
using namespace std;


unsigned long long LCM (unsigned long long n1,unsigned long long n2)
{
    unsigned long long GCD = __gcd(n1,n2);
    unsigned long long result = (n1*n2)/GCD;
    return result;
}

unsigned long long call,j,temp,i,num,mod;

int main()
{

    while (true)
    {
        j=1;
        scanf("%llu",&num);

        if(num == 0)return 0;
        temp = j;

        for(i=1; i<=num-1; i++,j++)
        {
            call = LCM(temp,j+1);
            temp = call;
            j = i;
        }

        //printf("%llu\n",temp);
        while(true)
        {
            mod = temp%10;

            if(mod!=0)
            {
                printf("%llu\n",mod);
                break;
            }

            temp = temp/10;
        }
    }

    return 0;
}
