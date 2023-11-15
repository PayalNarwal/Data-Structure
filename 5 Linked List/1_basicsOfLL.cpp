#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        this-> data = 0;
        this-> next = NULL;
    }

    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};

void printLL(Node* node){
    Node* temp = node;
    while(temp != NULL){
        cout <<"["<< temp->data << "] -> ";
        // cout << temp->next << endl;
        temp = temp->next;
    }
}

int main(){

    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);

    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node6;

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    // cout << node2 -> data << endl;
    // cout << &node2 -> data << endl;
    // cout << node2 -> next << endl;
    // cout << node3 -> data << endl;
    // cout << &node3 -> data << endl;
    // cout << node3 -> next << endl;
    // cout << node4 -> data << endl;
    // cout << &node4 -> data << endl;
    // cout << node4 -> next << endl;
    // cout << node5 -> data << endl;
    // cout << &node5 -> data << endl;
    // cout << node5 -> next << endl;
    // cout << node6 -> data << endl;
    // cout << &node6 -> data << endl;
    // cout << node6 -> next << endl;

    printLL(node1);

    
    return 0; 
}