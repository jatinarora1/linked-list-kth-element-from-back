#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* newNode(int value)
{
    node* t=(struct node*)malloc(sizeof(struct node));
    t->data=value;
    t->next=NULL;
    return t;
}
void create(node*&head)
{
    int data;
    node*temp,*prev=NULL;
    while(1)
    {
        cin>>data;
        node* temp=newNode(data);
        if(head==NULL)
            head=temp;
        else
            prev->next=temp;
        prev=temp;
        if(data==-1)
            break;

    }


}
/*void reverse(node*&head)
{
    node*c=head,*p=NULL,*n;
    while(c){
    n=c->next;
    c->next=p;
    p=c;
    c=n;

    }
    head=p;
}*/
void display(node*&head)
{
    node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
node* kthfromback(node*&head)
{
    int k;
    node*fast=head,*slow=head;
    cout<<"enter the value of k"<<endl;
    cin>>k;
    for(int i=0;i<k;i++)
    {

        fast=fast->next;
    }
    while(fast!=NULL&&fast->next!=NULL)
    {

        fast=fast->next;
        slow=slow->next;
    }

    return slow;
}
int main()
{
    node* head=NULL;

    create(head);

    node* x=kthfromback(head);
    cout<<x->data;
    //display(head);
 
}
