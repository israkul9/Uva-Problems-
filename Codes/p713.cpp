
#include<bits/stdc++.h>
using namespace std;


string findSum(string str1, string str2)
{

    if (str1.length() > str2.length())

        swap(str1, str2);


    string str = "";


    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;


    int carry = 0;


    for (int i=n1-1; i>=0; i--)
    {

        int sum = ((str1[i]-'0') +(str2[i+diff]-'0') +carry);

        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    if (carry!=0)
    {
        str.push_back(carry+'0');
    }


    reverse(str.begin(), str.end());

    return str;
}


int main()
{
    string num1,num2,res;

    int test;
    cin>>test;

    for(int j=1; j<=test; ++j)
    {

        cin>>num1>>num2;

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        res = findSum(num1, num2);
        reverse(res.begin(),res.end());

        int i=0;
        while(res[i]=='0')
        {
            i++;
        }

        for(int v=i; res[v]; v++)

            //for(int t=0; res[t]; t++)
        {
            // if(res[t]!= '0')
            cout<<res[v];
        }
        printf("\n");
    }

    //cout <<res<<endl;
    return 0;
}


