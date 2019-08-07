#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

vector<int>Binary;
vector<int>V;

int main()
{
    int num,temp,hex;

    int test;
    cin>>test;

    for(int k=1; k<=test; ++k)
    {

        cin>>num;
        hex=num;

        int count=0;
        while (true)
        {
            temp=num%2;
            Binary.push_back(temp);
            if(temp==1)
            {
                count++;
            }
            num=num/2;
            if(num==0)break;
        }


        int mod,sum=0;
        while(hex>0)
        {
            mod = hex%10;
            V.push_back(mod);
            hex=hex/10;

        }
        int x=1,f;
        int t =  V.size();
        int d =1;
        int m=t;



        reverse(V.begin(),V.end());

        for( f=0; f<t; f++)
        {
            while(d<m)
            {
                x=x*16;
                d++;
            }

            sum = sum + V[f]*x;

            x=1;
            d=1;
            m--;

        }

        int count1=0;
        while (true)
        {
            temp=sum%2;
            Binary.push_back(temp);
            if(temp==1)
            {
                count1++;
            }
            sum=sum/2;
            if(sum==0)break;
        }

        cout<<count<<" "<<count1<<endl;
        Binary.clear();
        V.clear();
    }
    return 0;
}

