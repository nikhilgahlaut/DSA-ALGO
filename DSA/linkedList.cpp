#include<iostream> 
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node( int data){
        val = data;
        next = NULL;
    }
};

//inserting at head
void insertAtHead(Node* &head, int val){
    Node *new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

//inserting at tail
void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp ->next !=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

//inserting at the given position
void insertAtPosition(Node* &head, int pos,int val){
    if(pos == 0){
        insertAtHead(head,val);
        return;
    }
    //if position is other than 0
    Node* new_node = new Node(val);
    Node* temp = head;
    int current = 0;
    while(current!=pos-1){
        temp = temp->next;
        current++;
    }
    //when current = pos-1
    new_node ->next = temp->next;
    temp->next = new_node; 
}

//deleting at head
void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}

//deleting at position
void deleteAtPosition(Node* &head,int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    Node* prev = head;
    int curr = 0;
    while(curr != pos-1){
        prev = prev->next;
        curr++;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}

//display linkedlist
void display(Node* head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    Node* head = NULL;
    insertAtHead(head,2);
    display(head);

    insertAtHead(head,3);
    display(head);

    insertAtHead(head,4);
    display(head);
    
    //insert at tail
    insertAtTail(head,1);
    display(head);
    insertAtPosition(head,1,5);
    display(head);

    //delete
    deleteAtHead(head);
    display(head);
    deleteAtPosition(head,1);
    display(head);


    return 0;
}