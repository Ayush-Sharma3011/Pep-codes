// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// void insertAtEnd(Node* head, int val){
//     Node* newNode=new Node(val);
//     Node* temp=head;
//     while(temp->next != NULL){
//         temp=temp->next;
//     }
//     temp->next=newNode;
// }

// int main(){
//     Node *head = new Node(1);
//     insertAtEnd(head, 2);
//     insertAtEnd(head, 3);
//     return 0;
// }



#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertEnd(Node* &head,int val){

    Node* newNode = new Node(val);

    if(head==NULL){
        head=newNode;
        newNode->next=head;
        return;
    }

    Node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=newNode;
    newNode->next=head;
}

void display(Node* head){

    if(head==NULL)
        return;

    Node* temp=head;

    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);

    cout<<endl;
}

int main(){
    Node* head=NULL;

    insertEnd(head,10);
    insertEnd(head,20);
    insertEnd(head,30);
    insertEnd(head,40);

    display(head);

    return 0;
}

