#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertatfast(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
    }
    head=prev;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *newnode = new node(5);
    node *head = newnode;

    // cout<<newnode->data<<endl;
    // cout<<newnode->next<<endl;
    print(head);
    insertatfast(head, 7);
    print(head);

    insertatfast(head, 8);
    insertatfast(head, 9);
    print(head);
    insertatfast(head, 10);
    insertatfast(head, 11);
    insertatfast(head, 12);
    print(head);

cout<<"the revere of the linkid list is :"<<endl;
    reverse(head);
    print(head);
}
