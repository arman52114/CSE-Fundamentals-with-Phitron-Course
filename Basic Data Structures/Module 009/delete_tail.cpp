#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
           int val;
           Node* preNode;
           Node* nextNode;

           Node(int val)
           {
               (*this).val=val;
               (*this).preNode=NULL;
               (*this).nextNode=NULL;
           }
};
void Insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        cout<<endl<<"INSERTED AT HEAD."<<endl;
        return;
    }
   tail->nextNode=newNode;
   newNode->preNode=tail;
   tail=newNode;
    cout<<endl<<"INSERTED AT TAIL."<<endl;
}
void insert_at_any_position(Node* head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node* tmp=head;
   if(head==NULL)
   {
       cout<<endl<<"Position Not Available"<<endl;
       return;
   }

    for(int i=1;i<pos;i++)
    {
        tmp=tmp->nextNode;
        if(tmp->nextNode==NULL)
        {
            cout<<endl<<"Position Not Available."<<endl;
            return;
        }   
    }
    newNode->nextNode=tmp->nextNode;
    tmp->nextNode=newNode;
    newNode->nextNode->preNode=newNode;
    newNode->preNode=tmp;
    cout<<endl<<"VALUE INSERTED."<<endl;
}
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->nextNode=head;
    head->preNode=newNode;
    head=newNode;
}
void delete_any_position(Node* head,int pos)
{
    for(int i=1;i<pos;i++)
    {
        if(head==NULL)
       {
           cout<<endl<<"Position Not Available"<<endl;
           return;
       }
       head=head->nextNode;    
    }
    Node* deleteNode=head->nextNode;
    head->nextNode=head->nextNode->nextNode;
    head->nextNode->preNode=head;
    cout<<"Delete Done."<<endl;
}
void delete_tail(Node* &tail,Node* &head)
{
    if(tail==NULL)
    {
        cout<<endl<<"Position Not Available"<<endl;
        return;
    }
    Node* deletetail=tail;
    tail=tail->preNode;
    delete deletetail;
    if(tail ==NULL)
    {
        head=NULL;
        return;
    }
    tail->nextNode=NULL;
}
void delete_head(Node* &head,Node* &tail)
{
    if(head==NULL)
    {
        cout<<endl<<"Position Not Available"<<endl;
        return;
    }
     Node* deletehead=head;
     head=head->nextNode;
     delete deletehead;
     if(head==NULL)
     {
        tail=NULL;
        return;
     }
     head->preNode=NULL;
}
void printing_next(Node* head)
{
    cout<<endl<<"LINKED LIST PRINTED IN NORMAL BELOW."<<endl;
    while(head !=NULL)
    {
        cout<<head->val<<" ";
        head=head->nextNode;
        
    }
    cout<<endl;
}
void printing_pre(Node* tail)
{
    cout<<endl<<"LINKED LIST PRINTED IN REVERSE BELOW."<<endl;
    while( tail!=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->preNode;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
        cout<<endl;
        int op;
        cout<<"Option 1: Insert At tail."<<endl;
        cout<<"Option 2: Print Linked List."<<endl;
        cout<<"Option 3: Print Linked List Previous."<<endl;
        cout<<"Option 4: Insert At Any Position."<<endl;
        cout<<"Option 5: Insert At Head."<<endl;
        cout<<"Option 6: Delete Any Position."<<endl;
        cout<<"Option 7: Delete Tail."<<endl;
        cout<<"Option 8: Delete Head."<<endl;
        cout<<"Option 9: Terminate."<<endl;
        cin>>op;

        if(op==1)
        {
             int val;
            cout<<"Enter Value."<<endl;
            cin>>val;
            Insert_at_tail(head,tail,val);
        }
        else if(op==2)
        {
            printing_next(head);
        }
        else if(op==3)
        {
            printing_pre(tail);
        }
        else if(op==4)
        {
             int pos,val;
             cout<<"Enter Position."<<endl;
             cin>>pos;
             cout<<"Enter Value."<<endl;
             cin>>val;
             if(pos==0)
             {
                insert_at_head(head,tail,val);
             }
             else insert_at_any_position(head,pos,val);
             
        }
        else if(op==5)
        {
            int val;
            cout<<"Enter Value."<<endl;
            cin>>val;
            insert_at_head(head,tail,val);
        }
        else if(op==6)
        {
            int pos;
            cout<<"Enter Position."<<endl;
            cin>>pos;
            delete_any_position(head,pos);
        }
        else if(op==7)
        {
            delete_tail(tail,head);
        }
        else if(op==8)
        {
            delete_head(head,tail);
        }
        else if(op==9)
        {
            break;
        }
        
    }
    
    
    

    
    return 0;
}