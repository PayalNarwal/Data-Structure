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

void printDoublyLL(Node* head){
    Node* temp = head;
    cout << "Doubly linked list : ";
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int len(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void ins_at_beg(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = tail = newnode;
    }else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }  
}

void ins_at_end(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(tail == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void ins_at_pos(Node* &head, Node* &tail, int pos, int val){
    if(pos <= 1 || head == NULL){
        ins_at_beg(head,tail,val);
    }
    else if(pos > len(head)){
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

        // approch without temp2
        // temp1->next->prev = newnode;
        // newnode->next = temp1->next;
        // temp1->next = newnode;
        // newnode->prev = temp1;
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
        cout << "hey" << endl;
        Node* temp = head;
        cout << temp->data << endl;
        head = temp->next;
        cout << head->data << endl;
        head->prev = NULL;
        temp->next = NULL;
        cout << "bye" << endl;
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
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
}

void del_from_pos(Node* &head, Node* &tail,int pos){
    if(pos == 1){
        del_from_beg(head,tail);
    }
    else if(pos == len(head)){
        del_from_end(head,tail);
    }
    else if(pos>1 && pos < len(head)){
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

void bubbleSortLL(Node* &head,Node* &tail){
    Node* temp = head;
    Node* curr, *prev;
    while(temp->next!=tail){
        prev = curr = head;
        while(curr!=NULL){
            prev = curr;
            curr = curr->next;
            if(curr != NULL &&  prev->data > curr->data ){
                swap(prev->data,curr->data);
            }
        }
        temp = temp->next;
        printDoublyLL(head);
    }
}

int main(){

    // Node* node1 = new Node(10);
    // Node* node2 = new Node(2);
    // Node* node3 = new Node(32);
    // node1 -> next = node2;
    // node2 -> prev = node1;
    // node2 -> next = node3;
    // node3 -> prev = node2;
    // printDoublyLL(node1);
    // cout << endl;
    // cout << len(node1) << endl;

    Node* head = NULL;
    Node* tail = NULL;

    ins_at_beg(head,tail,17);
    printDoublyLL(head);
    // cout << len(head) << endl;

    ins_at_beg(head,tail,150);
    printDoublyLL(head);
    // cout << len(head) << endl;

    ins_at_beg(head,tail,18);
    printDoublyLL(head);
    // cout << len(head) << endl;

    ins_at_end(head,tail,140);
    printDoublyLL(head);
    
    ins_at_end(head,tail,20);
    printDoublyLL(head);
    cout << head->data << endl;
    cout << tail->data << endl;

    ins_at_pos(head,tail,4,77);
    printDoublyLL(head);
    cout << head->data << endl;
    cout << tail->data << endl;

    // del_from_beg(head,tail);
    // printDoublyLL(head);
    // cout << head->data << endl;
    // cout << tail->data << endl;

    // del_from_end(head,tail);
    // printDoublyLL(head);
    // cout << head->data << endl;
    // cout << tail->data << endl;

    // del_from_pos(head,tail,1);
    // printDoublyLL(head);
    // cout << head->data << endl;
    // cout << tail->data << endl;
    
    // del_from_pos(head,tail,5);
    // printDoublyLL(head);
    // cout << head->data << endl;
    // cout << tail->data << endl;

    bubbleSortLL(head,tail);
    
    return 0; 
}