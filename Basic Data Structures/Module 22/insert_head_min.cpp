#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_indx = v.size() - 1;

        while (cur_indx != 0)
        {
            int parent_indx = (cur_indx - 1) / 2;
            if (v[cur_indx] > v[parent_indx])
            {
                swap(v[cur_indx], v[parent_indx]);
            }
            else
            {
                break;
            }
            cur_indx = parent_indx;
        }
    }
   

    for(int val:v)
    {
        cout<<val<<" ";
    }

    return 0;
}