#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
          string name;
          int roll;
          int marks;
};
bool cmp(Student a,Student b)
{
    if(a.marks > b.marks)return true;
    else return false;
}
int main()
{
    Student a[3];

    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll;
        cin>>a[i].marks;
        getchar();
    }

    sort(a,a+3,cmp);
     
    

    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" ";
        cout<<a[i].roll<<" ";
        cout<<a[i].marks<<" ";
        cout<<endl;
    }
    
    return 0;
}