//BISMILLAH_HIR_RAHMANIR_RAHIM

#include<bits/stdc++.h>
using namespace std;



int main()
{

    ios_base::sync_with_stdio( false );
    cin.tie( NULL );


    int t;
    cin>>t;

    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);

        if(str.length()==0)
        {
            cout<<"0"<<endl;
            continue;
        }

        string rev = string(str.rbegin(),str.rend());
        //cout<<str<<" -- "<<rev<<endl;

        int l1 = str.length();


        int box[l1+1][l1+1];
        memset(box,false,sizeof(box));
        for(int i=0; i<=l1; ++i)
        {
            box[0][i] = 0;
        }

        for(int i=0; i<=l1; ++i)
        {
            box[i][0] = 0;
        }


        for(int i=1; i<=l1; ++i)
        {
            for(int j=1; j<=l1; ++j)
            {
                if(rev[i-1]==str[j-1])
                {
                    int x = box[i-1][j-1];
                    box[i][j] = x + 1;
                }
                else
                {
                    int upor = box[i-1][j];
                    int pash_theke = box[i][j-1];

                    box[i][j] = max(upor,pash_theke);

                }
            }
        }



        cout<<box[l1][l1]<<endl;
    }



    return 0;
}

