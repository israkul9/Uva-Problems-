//Bismillah_hir_rahmanir_rahim


#include<bits/stdc++.h>
using namespace std;

stack<int>stk;
queue<int>que;
priority_queue<int>priq;

int main()
{

    int n;
    while  (cin>>n)
    {

        while(!stk.empty() )
        {
            stk.pop();
        }
        while(!que.empty())
        {
            que.pop();
        }
        while(!priq.empty() )
        {
            priq.pop();
        }
        int rmv= 0;
        int s = 0, q = 0, pq = 0;
        for(int i=0; i<n; ++i)
        {
            int ins,value;
            cin>>ins>>value;
            if(ins==1)
            {
                stk.push(value);
                que.push(value);
                priq.push(value);
            }
            else if(ins==2)
            {
                rmv++;


                if(!stk.empty() && stk.top() ==value )
                {
                    s++;
                    stk.pop();

                }
                if (!que.empty() &&  que.front()==value)
                {
                    q++;
                    //cout<<que.size()<<endl;
                    que.pop();
                }
                if(!priq.empty() && priq.top()==value)
                {
                    pq++;
                    priq.pop();
                }

            }
        }
        if(s==rmv && q!=rmv && pq!=rmv)
        {
            cout<<"stack"<<endl;
        }
        else if(s!=rmv && q==rmv && pq!=rmv)
        {
            cout<<"queue"<<endl;
        }
        else if(s!=rmv && q!=rmv && pq==rmv)
        {
            cout<<"priority queue"<<endl;
        }

        else if(s!=rmv && q!=rmv && pq!=rmv)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            cout << "not sure"<<endl;
        }

    }
    return 0;
}

