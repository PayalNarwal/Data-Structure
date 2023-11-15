#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev = NULL;
    Node* next = NULL;
    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        cout << "Node with value "<<this->data<< " deleted." << endl;
    }
};

void printDoublyLL(Node* head,Node* tail){
    Node* temp = head;
    cout << "Doubly Circular linked list : ";
    while(temp != tail){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << tail->data << endl;
}

int len(Node* head, Node* tail){
    Node* temp = head;
    int len = 0;
    while(temp != tail){
        len++;
        temp = temp->next;
    }
    len++;
    return len;
}

void ins_at_beg(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = tail = newnode;
    }else{
        newnode->next = head;
        head->prev = newnode;
        tail->next = newnode;
        newnode->prev = tail;
        head = newnode;
    }  
}

void ins_at_end(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = head;
        head->prev = newnode;
        tail = newnode;
    }
}

void ins_at_pos(Node* &head, Node* &tail, int pos, int val){
    if(pos <= 1 || head == NULL){
        ins_at_beg(head,tail,val);
    }
    else if(pos > len(head,tail)){
        ins_at_end(head,tail,val);
    }
    else{
        Node* temp1 = head;
        int index = 1;
        while(index != (pos-1)){
            temp1 = temp1->next;
            index++;
        }
        Node* newnode = new Node(val);
        Node* temp2 = temp1->next;
        temp2->prev = newnode;
        newnode->next = temp2;
        temp1->next = newnode;
        newnode->prev = temp1;      
    }
}

void del_from_beg(Node* &head,Node* &tail){
    if(head == NULL){
        cout << "Empty linked list, deletion not posible" << endl;
    }
    else if(head->next == NULL){
        Node* temp = head;
        head = tail = NULL;
        delete temp;
    }
    else{
        Node* temp = head;
        head = temp->next;
        tail->next = head;
        head->prev = tail;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;       
    }
}

void del_from_end(Node* &head, Node* &tail){
    if(head == NULL){
        cout << "Empty linked list, deletion not posible" << endl;
    }
    else if(head->next == NULL){
        Node* temp = head;
        head = tail = NULL;
        delete temp;
    }
    else{
        Node* temp = tail;
        tail = temp->prev;  
        tail->next = head;
        temp->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
}

void del_from_pos(Node* &head, Node* &tail,int pos){
    if(pos == 1){
        del_from_beg(head,tail);
    }
    else if(pos == len(head,tail)){
        del_from_end(head,tail);
    }
    else if(pos>1 && pos < len(head,tail)){
        Node* temp = head;
        int i = 1;
        while(i != pos){
            temp = temp->next;
            i++;
        }
        Node* left = temp->prev;
        Node* right = temp->next;
        left->next = right;
        right->prev = left;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else{
        cout << "Deletion not possible." << endl;
    }
}


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    ins_at_beg(head,tail,17);
    printDoublyLL(head,tail);

    ins_at_beg(head,tail,150);
    printDoublyLL(head,tail);

    ins_at_beg(head,tail,18);
    printDoublyLL(head,tail);

    ins_at_end(head,tail,140);
    printDoublyLL(head,tail);
    
    ins_at_end(head,tail,20);
    printDoublyLL(head,tail);
    cout << head->data << endl;
    cout << tail->data << endl;

    ins_at_pos(head,tail,4,77);
    printDoublyLL(head,tail);
    cout << head->data << endl;
    cout << tail->data << endl;
    cout << tail->next->data << endl;

    del_from_beg(head,tail);
    printDoublyLL(head,tail);
    cout << head->data << endl;
    cout << tail->data << endl;
    cout << tail->next->data << endl;

    del_from_end(head,tail);
    printDoublyLL(head,tail);
    cout << head->data << endl;
    cout << tail->data << endl;
    cout << tail->next->data << endl;

    del_from_pos(head,tail,1);
    printDoublyLL(head,tail);
    cout << head->data << endl;
    cout << tail->data << endl;
    cout << tail->next->data << endl;
    
    del_from_pos(head,tail,5);
    printDoublyLL(head,tail);
    cout << head->data << endl;
    cout << tail->data << endl;
    cout << tail->next->data << endl;

    
    
    return 0; 
}