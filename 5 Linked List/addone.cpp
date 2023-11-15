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
    ~Node(){
        cout << "Destructor called" << endl;
    }
};

void printLL(Node* node){
    Node* temp = node;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void ins_at_beg(Node* &head, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head  = newnode;
        return;
    }
    newnode -> next = head ;
    head = newnode;
}

Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        Node* nextNode= curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

void addOne(Node* &head){
    head = reverse(head);
    int carry = 1;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){ 
        int total = temp->data + carry;
        int digit = total % 10;
        carry = total/10;
        temp->data = digit;
        if(carry == 0){
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    if(carry != 0){
        Node* n = new Node(carry);
        prev->next = n;
    }
    head = reverse(head);
}

int main(){
    Node* head = NULL;
    ins_at_beg(head,9);
    ins_at_beg(head,9);
    ins_at_beg(head,9);
    printLL(head);
    addOne(head);
    printLL(head);
    // printLL(reverse(head));
    return 0; 
}