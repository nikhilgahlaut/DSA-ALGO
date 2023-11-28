#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};

class Linkedlist{
    public:
        Node* head;
    Linkedlist(){
        head = NULL;
    }

    void insertAtTail(int val){
        Node *new_Node = new Node(val);
        if(head == NULL){
            head = new_Node;
            return;
        }
        Node* temp = head;
        while(temp ->next != NULL){
            temp = temp->next;
        }
        temp->next = new_Node;

    }

    void display(){
        Node *temp = head;
        while(temp!= NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

//delete alternate node
void deleteAlternate(Node* &head){
    Node *current = head;
    while(current->next!= NULL && current!= NULL){
        //node to be deleted
        Node *temp = current->next;
        current->next = current->next->next;
        free(temp);
        current= current->next;
    }
}

//delete duplicate
void deleteDuplicate(Node* &head){
    Node *current = head;
    while(current->next!=NULL){
    while( current->val == current->next->val){
        Node *temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
    current = current->next;
    }
}


int main(){
    Linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    // ll.insertAtTail(6);
    ll.display();

    deleteDuplicate(ll.head);
    ll.display();
    return 0;
}