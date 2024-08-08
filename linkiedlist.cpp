#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;
    // constructor.
    Node(int data1)
    {
        this->data = data1;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
        }
        cout << "the memeory free that is" << value << endl;
    }
};
void insertathead(Node *&head, int d);

// this is because they find this function but not get that why be predefine this.

void insertatpostion(Node *&head, int postion, int d)
{
    if (postion == 1)
    {

        insertathead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < postion - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // create new node
    Node *middlenode = new Node(d);
    middlenode->next = temp->next;
    temp->next = middlenode;
}

// insert at last postion in linkided list
void insertattail(Node *&tail, int d)
{

    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}
// insert at head postion
void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
Node* reverell(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward= NULL;
    
    while(curr != NULL){
         forward=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forward;
    }
    return prev;
    
}

void deletenode(Node *&head, int postion)
{
    if (postion == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < postion)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
//
void printlinkiedlist(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // create a new node
    Node *newnode = new Node(5);
    // head point to newnode.
    Node *head = newnode;
    Node *tail = newnode;
    printlinkiedlist(head);
    insertathead(head, 12);

    printlinkiedlist(head);

    insertathead(head, 15);
    printlinkiedlist(head);

    printlinkiedlist(head);
    insertattail(tail, 19);
    insertattail(tail, 20);
    printlinkiedlist(head);

    insertatpostion(head, 3, 9);
    insertatpostion(head, 1, 29);
    printlinkiedlist(head);

    deletenode(head, 3);
    printlinkiedlist(head);

    head=reverell(head);

    printlinkiedlist(head);
}