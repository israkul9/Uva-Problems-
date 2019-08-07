//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>

using namespace std;


int main ()
{


    int n1,n2,i,j,test=0;
    while(cin>>n1>>n2){
            
            if(n1==0 && n2==0)return 0;

    int a[n1];
    for( i=0; i<n1; i++)
    {
        cin>>a[i];
    }
    int b[n2];
    for( i=0; i<n2; i++)
    {
        cin>>b[i];
    }

    int mat[n1+1][n2+1];
    for( i=0; i<=n1; i++)
    {
        mat[i][0]=0;
    }
    for( j=0; j<=n2; j++)
    {
        mat[0][j]=0;
    }

    for( i=1; i<=n1; i++)
    {
        for(j=1; j<=n2; j++)
        {

            if(a[i-1]==b[j-1])
            {
                mat[i][j] =  mat[i-1][j-1]+1;
            }
            else
            {

                mat[i][j] = max(mat[i][j-1],mat[i-1][j]);
            }
        }
    }
    
    test++;
    cout<<"Twin Towers #"<<test<<endl;
    cout<<"Number of Tiles : ";
    cout<<mat[n1][n2]<<endl;
    cout<<endl;
    memset(a,false,sizeof(a));
    memset(b,false,sizeof(b));
    memset(mat,false,sizeof(mat));
    
    
    }

    return 0;
}

