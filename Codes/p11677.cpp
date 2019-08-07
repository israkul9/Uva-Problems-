#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hour_1,minute_1,hour_2,minute_2,sleep_time,wake_up_time,count_time,day;
    while(scanf("%d%d%d%d",&hour_1,&minute_1,&hour_2,&minute_2)==4)
    {
        day=1440;
        if(hour_1==0 && minute_1==0 && hour_2==0 && minute_2==0)break;
        sleep_time=((hour_1*60)+minute_1);
        wake_up_time=((hour_2*60)+minute_2);
        count_time=abs(wake_up_time-sleep_time);
        if(sleep_time>wake_up_time) count_time=(day-count_time);
        else if(sleep_time==wake_up_time)count_time=day;
        printf("%d\n",count_time);
    }
    return 0;
}
