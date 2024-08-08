#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data1)
    {
        data = data1;
        this->next = NULL;
        this->prev = NULL;
    }
};

int  middlenode(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(fast!= NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
void insetattail(Node* &tail,int d){

    Node* temp=new Node(d);
    
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertathead(Node* &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
     head=temp;
    
}
int lengthoflinkidelsit(Node* head){
    Node* temp=head;
    int count=0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insertatmiddle(Node* &head,int postion,int d){
    Node* temp=head;
    Node* newnode=new Node(d);
    int cnt=1;
    while(cnt<=postion-1){
        temp=temp->next;
        cnt++;

    }
    temp->next=newnode->next;
    temp->next->prev=newnode;
    newnode->prev=temp;
    temp->next=newnode;
}

void printlinkiedlist(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

void deletemiddlelemnt(Node* head){

    Node* slow=head;
    Node* fast=head;
    fast=fast->next->next;
    while(fast != NULL && fast->next!= NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=slow->next->next;

}


int main()
{

    Node *newnode = new Node(8);
    Node *head = newnode;
    Node* tail=newnode;

    // cout<<newnode->data<<endl;
    // cout<<newnode->next<<endl;
    // cout<<newnode->prev<<endl;

    printlinkiedlist(head);
    insertathead(head,6);
    printlinkiedlist(head);

 insetattail(tail,14);

printlinkiedlist(head);
insetattail(tail,15);
insetattail(tail,16);
insetattail(tail,17);
insetattail(tail,18);
insetattail(tail,19);
printlinkiedlist(head);

 int middle=middlenode(head);
 cout<<"the middle node is "<<middle<<endl;
 cout<<"the length of the linkied list is:"<<lengthoflinkidelsit(head);

//delete the middle elemnt of the linkidelist;
 deletemiddlelemnt(head);
cout<<endl;
 printlinkiedlist(head);
 insertatmiddle(head,3,5);
 printlinkiedlist(head);
 cout<<endl;
 
 cout<<head->data;



    return 0;
}