///uva - Summation of Four Primes

#include<bits/stdc++.h>
using namespace std;
#define max 10000000


bool arr[max];


void seive ()
{

    arr[0]=arr[1]=1;
    arr[2]=0;
    for(int i=4 ; i<=max ; i=i+2)
    {
        arr[i]=1;
    }

    for(int i=3 ; i<=sqrt(max) + 1 ; i=i+2)
    {
        if(arr[i] == 0)
        {
            for(int j=i*i ; j<=max; j=j+(2*i))
            {
                arr[j]=1;
            }
        }
    }
}



int main()
{
    seive();

    long long int num,i,j,goldbatch;

    while (scanf("%lld",&num)!=EOF)
    {
        if(num>=8)
        {
            if(num%2==0)
            {
                goldbatch = num -4;
                for(i=2; i<=goldbatch/2; i++)
                {
                    if(arr[i]==0 && arr[goldbatch-i]==0)
                    {
                        printf("2 2 %lld %lld\n",i,goldbatch-i);
                        break;
                    }
                }
            }
            else
            {
                goldbatch = num-5;

                for(i=2; i<=goldbatch/2; i++)
                {
                    if(arr[i]==0 && arr[goldbatch-i]==0)
                    {
                        printf("2 3 %lld %lld\n",i,goldbatch-i);
                        break;
                    }
                }

            }
        }
        else
        {
            printf("Impossible.\n");
        }
    }

    return 0;
}


/*

যদি সংখ্যাটি জোড় হয় তাহলে প্রথম ২ টি হবে ২, ২ আর বাকি যত থাকবে সেটি Goldbach's Conjecture এর মাধ্যমে বের করেন ।
যদি সংখ্যাটি বিজোড় হয় তাহলে ১ম ২ টি সংখ্যা হবে ২,৩ আর বাকি যত থাকে সেটি Goldbach's Conjecture এর মাধ্যমে বের করেন ।


যেমন ১২ সংখ্যাটি জোড় । তাহলে ১ম ২ টি হবে ২,২ ।এখন বাকি থাকেন তাহলে
১২-(২+২)=৮ । এখন ৮ কে Goldbach's Conjecture মাধ্যমে করলে হয় ৩, ৫ ।
সুতরাং ১২= ২,২,৩,৫;

আবার ১৩ হল বিজোড় ।
তাহলে ১৩= ২,৩,৩,৫ ।

তবে শর্ত হল সংখ্যাটি অবশই ৮ অথবা ৮ এর চেয়ে বড় হতে হবে ।
*/
