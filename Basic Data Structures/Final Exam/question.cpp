#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<>> pq;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int z;
        cin>>z;
        if(z==0)
        {
            int nu;
            cin>>nu;
            pq.push(nu);
            cout<<pq.top()<<endl;
        }
        else if(z==1)
        {
            if(pq.empty()) cout<<"Empty"<<endl;
            else  cout<<pq.top()<<endl;
           
        }
        else if(z==2)
        {
            if(!pq.empty()) pq.pop();
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<pq.top()<<endl;
            }
        }
        
    }


    
    return 0;
}