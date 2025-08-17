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

int lengthLL(Node* node){
    Node* temp = node;
    int i = 1;
    while(temp != NULL){
        i++;
        temp = temp->next;
    }
    return i;
}

void ins_at_beg(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = tail = newnode;
        return;
    }
    newnode -> next = head ;
    head = newnode;
}

void ins_at_end(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void ins_after_ele(Node* &head, Node* &tail, int ele, int val){
    if(head == NULL){
        cout << "Empty linked list. Insertion not possible." << endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == ele){
            Node* newnode = new Node(val);
            newnode -> next = temp -> next;
            temp -> next = newnode;
            if(temp==tail){
                tail = newnode;
            }
            return;
        }
        temp = temp -> next;
    }
    cout << "Element not found. " << endl;
}

void ins_at_pos(Node* &head, Node* &tail, int position, int val){
    if(head == NULL || position == 0){
        ins_at_beg(head,tail,val);
        return;
    }
    int i = 1;
    Node* temp = head;
    while(i<position && temp != NULL){
        temp = temp->next;
        i++;
    }
    if(temp == NULL){
        ins_at_end(head,tail,val);
    }else{
        Node* newNode = new Node(val);
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }  
}

void del_from_beg(Node* &head, Node* &tail){
    if(head == NULL){
        cout << "Empty Linked List" << endl;
    }else if(head == tail){
        head = tail = NULL;
        delete head;
    }else{
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }  
}

void del_from_end(Node* &head, Node* &tail){
    if(head == NULL){
        cout << "Empty Linked List" << endl;
    }else if(head == tail){
        head = tail = NULL;
        delete head;
    }else{
        Node* temp = tail;
        Node* prev = head;
        while(prev->next != tail){
            prev = prev -> next;
        }
        prev -> next = NULL;
        tail = prev;
        delete temp;
    }  
}

void del_from_pos(Node* &head, Node* &tail, int position){
    if(head == NULL){
        cout << "Empty Linked List" << endl;
        return;
    }
    int len = lengthLL(head);
    if(position == 1){
        del_from_beg(head,tail);
    }
    else if(position == len){
        del_from_end(head,tail);
    }
    else{
        int i = 1;
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1){
            prev = curr;
            curr = curr->next;
            position--;
        }        
        prev -> next = curr->next;
        curr -> next = NULL;
        delete curr;
    }  
}

void separateEvenOdd(Node* head){
    if(head == NULL){
        return;
    }
    Node* l1 = head;
    Node* t1 = l1;
    if(head->next == NULL){
        cout << "Odd LL" ;
        printLL(l1);
        return;
    }
    Node* l2 = head->next;
    Node* t2 = l2;
    Node* temp = l2->next;
    while(temp != NULL){
        t1->next = temp;
        t1 = temp;
        temp = temp->next;
        if(temp == NULL){
            break;
        }
        t2->next = temp;
        t2 = temp;
        temp = temp->next;        
    }
    t1->next = NULL;
    cout << "Even Part : " << endl;
    printLL(l1);
    cout << "Odd Part : " << endl;
    t2->next = NULL;
    printLL(l2);
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    ins_at_beg(head,tail,67);
    ins_at_beg(head,tail,7);
    ins_at_end(head,tail,10);
    ins_at_beg(head,tail, 23);
    ins_at_end(head,tail,-33);
    ins_at_beg(head,tail, 3);
    ins_at_end(head,tail,1);

    printLL(head);
    separateEvenOdd(head);
    

    return 0; 
}