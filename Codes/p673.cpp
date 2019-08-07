#include<bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    // char str[130];
    string str;
    cin>>test;
    getchar();
    for(int j=1; j<=test; j++)
    {
        //scanf("%s",str);
        getline(cin,str);
        stack < char > st;
        for(int i=0; str[i]; i++)
        {
            if( (!st.empty() && st.top()=='(' && str[i]==')') || (!st.empty() && st.top()=='[' && str[i]==']') )
            {
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }
        if(st.empty())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
