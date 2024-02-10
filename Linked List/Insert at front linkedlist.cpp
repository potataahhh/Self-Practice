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

void Insert(node* &head,int val)          // for inserting node
{
    node* n = new node(val);   
    n->next=head;
    head=n;     
    // if(head==NULL)                          // base condition
    // {
    //     head=n;
    // }
    // node* temp = head;                      // iterating through the linked list
    // while(temp->next!= NULL)
    // {
    //     temp =temp->next;
    // }
    // temp->next=n;
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


int main()
{
    node* head=NULL;
    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    display(head);

    return 0;
}