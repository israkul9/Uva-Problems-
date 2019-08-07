#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long int year;
    while (scanf("%ld",&year)!=EOF)
    {
        if(year % 4==0 || year % 400==0)
            printf("This is leap year.\n");
         if(year % 100 !=0)
            printf("This is leap year.\n");
         if(year % 15 ==0)
            printf("This is huluculu festival year.\n");
         if( year % 55==0)
            printf("This is Bulukulu festival year.\n");
        else
            printf("This is an ordinary year.\n");
        }

    return 0;
}
