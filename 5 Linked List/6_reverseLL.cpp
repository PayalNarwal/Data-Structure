#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout << "Destructor called" << endl;
    }
};


Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* nextNode = NULL;
    while(curr != NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
void ins_at_beg(Node* &head,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
    }else{
        newnode->next = head;        
        head = newnode;
    }  
}
void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;

    ins_at_beg(head,67);
    ins_at_beg(head,7);
    ins_at_beg(head,10);
    ins_at_beg(head, 23);
    ins_at_beg(head,-33);

    printLL(head);
    head = reverse(head);
    printLL(head);

    return 0; 
}