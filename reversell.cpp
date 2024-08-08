#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertathead(Node * &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void reverell(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward= NULL;
    
    while(curr != NULL){
         forward=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forward;
    }
    head=prev;
    
}
int middleofll(Node* &head){
    Node* slow =head;
    Node*  fast=head;
    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;


}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *newnode = new Node(4);
    Node *head = newnode;

   // print(head);
    insertathead(head, 1);
    insertathead(head, 2);
    insertathead(head, 3);
    insertathead(head, 4);
    insertathead(head, 5);

    print(head);

    reverell(head);
     print(head);

   //  cout<<"the head of the ll is :"<<head->data;
   int midlle=middleofll(head);
   cout<<"the middle element is :"<<midlle<<endl;
  

    return 0;
}