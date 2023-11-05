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

int main(){

    Node* n = new Node(2);
    cout<<n->val<<endl;
    cout<<"next ->"<<n->next;

    return 0;
}