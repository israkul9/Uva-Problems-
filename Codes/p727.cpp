//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;



int precidence (char c)
{
    if(c == '^') {
        return 3;
    } else if(c == '*' || c == '/') {
        return 2;
    } else if(c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}



int main()
{

    int test;

    scanf("%d",&test);

    cin.ignore();
    cin.ignore();


    while(test--) {

        string ch;
        vector<char>v;
        vector<char>postfix;
        stack<char>st;

        while(1) {
            getline(cin,ch);
            if(ch.length()==0) {
                break;
            }
            v.push_back(ch.at(0));
        }
        st.push('(');
        v.push_back(')');

        for(int i=0; i<v.size(); i++) {
            if(v[i]=='(') {
                st.push(v[i]);
            } else if(isdigit(v[i])) {
                postfix.push_back(v[i]);
            } else if(v[i]=='+'||v[i]=='-'||v[i]=='*'||v[i]=='/'||v[i]=='^') {
                while(precidence(st.top())>=precidence(v[i])) {
                    postfix.push_back(st.top());
                    st.pop();
                }
                st.push(v[i]);
            } else if(v[i]==')') {
                while(st.top()!='(') {
                    postfix.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
        }

        for(int j=0; j<postfix.size(); j++) {
            printf("%c",postfix.at(j));
        }
        printf("\n");

        if(test>0) {
            printf("\n");
        }

        postfix.clear();
        v.clear();
        ch.clear();


    }

    return 0;
}

