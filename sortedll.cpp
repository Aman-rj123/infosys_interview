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
void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}


void length(node *&head)
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
    node *newnode = new node(9);
    node *head = newnode;

    length(head);
    insertathead(head, 3);
    insertathead(head, 3);
    insertathead(head, 4);
    insertathead(head, 5);
    insertathead(head, 6);
    length(head);

    return 0;
}