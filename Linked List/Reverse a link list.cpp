#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
        {
            data=val;
            next=NULL;
        }
};

void Insert(node* &head,int val)            // for inserting node
{
    node* n = new node(val);        
    if(head==NULL)                          // base condition
    {
        head=n;
    }
    node* temp = head;                      // iterating through the linked list
    while(temp->next!= NULL)
    {
        temp =temp->next;
    }
    temp->next=n;
}

void display(node* head)                    // function to display the element entered
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void Reverse(node* head)
{
    node* curr;
    node* prev;
    node* nextp;

    while(curr!=NULL)
    {
        nextp=curr->next;                       //conditions
        curr->next=prev;
        prev=curr;
        curr=nextp;

        return prev;
    }
}

int main()
{
    node* head=NULL;
    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    display(head);

    node* newhead=Reverse(head);
    display(newhead)
    return 0;
}