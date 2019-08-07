//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;


int main()
{

    while(1)
    {
        int test = 1;
        string str1,str2;
        cin>>str1;

        if(str1[0]=='#')
            break;
        cin>>str2;

        int len1 = str1.length();
        int len2 = str2.length();

        int mat [len1+1][len2+1];
        for(int i=0; i<=len1; i++)
        {
            mat[i][0]=0;
        }
        for(int i=0; i<=len2; i++)
        {
            mat[0][i]=0;
        }


        for(int i=1; i<=len1; i++)
        {
            for(int j=1; j<=len2; j++)
            {
                if(str1[i-1]==str2[j-1])
                {
                    mat[i][j] = mat[i-1][j-1]+1;

                }
                else
                {
                    mat[i][j] = max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }



        cout<<"Case #"<<test<<": you can visit at most "<<mat[len1][len2]<<" cities."<<endl;

        test++;
        memset(mat,false,sizeof(mat));

    }

    return 0;
}


