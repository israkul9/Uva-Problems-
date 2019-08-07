
#include<bits/stdc++.h>
using namespace std;


vector<int>v1;

int main()

{
    //string input;

    char input[1000],tem;
    int i,j,temp,t,len ;

//cin>>input;

    while ( cin.getline(input,1000) )
        //while(gets(input))
    {
        int n=0;


        if ( (input[0] -48) >= 0 && input[0]-48 <= 9 )
        {

            t = 0;
            len = strlen(input) - 1;

            while (t < len)
            {
                tem = input[t];
                input[t] = input[len];
                input[len] = tem;
                t++;
                len--;
            }


            for (i = 0; input[i]; ++i)
            {
                n = n * 10 + input[i]-48;


                if ( (n >= 65 && n <= 90) || (n >= 97 && n <= 122) || n == 32 || n == 33
                        ||n == 44 || n == 46 || n == 58 || n == 59 || n == 63)
                {
                    printf("%c",n);
                    //cout<<n;
                    n=0;
                }

            }
            printf("\n");
            // cout<<endl;

        }

        else
        {
            int c=0;

            for(i=0; input[i]; i++)
            {
                if( input[i]>='a' && input[i]<='z' || input[i]==' ' || input[i]=='!'
                        || input[i]==',' ||input[i]=='.'||input[i]==':'||input[i]==';'
                        ||input[i]=='?' ||input[i]>='A' && input[i]<='Z'  )
                {
                    v1.push_back(input[i]);
                    c++;

                }

            }

            if(c>0)
            {
                reverse(v1.begin(),v1.end());

                //printf("%d",v1[0]);

                for(j=0; j<v1.size(); j++)
                {
                    while(v1[j]>0)
                    {
                        temp=v1[j]%10;
                        //cout<<temp;
                        printf("%d",temp);
                        v1[j]=v1[j]/10;
                    }
                }
                //cout<<endl;

            }
            printf("\n");
            v1.clear();

        }
    }
    return 0;

}

