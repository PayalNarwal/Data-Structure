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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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
    if(position == 1){
        del_from_beg(head,tail);
        return;
    }
    int i = 1;
    Node* prev = head;
    while(i<position-1){
        prev = prev -> next;
        i++;
    }
    Node* temp = prev->next;
    if(temp == tail){
        del_from_end(head,tail);
        return;
    }
    prev -> next = temp->next;
    temp -> next = NULL;
    delete temp;

}

void bubbleSortLL(Node* &head){
    Node* temp = head;
    Node* curr, *prev;
    while(temp->next!=NULL){
        prev = curr = head;
        while(curr!=NULL){
            prev = curr;
            curr = curr->next;
            if(curr != NULL &&  prev->data > curr->data ){
                swap(prev->data,curr->data);
            }
        }
        temp = temp->next;
        printLL(head);
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    ins_at_beg(head,tail,67);
    ins_at_beg(head,tail,7);
    ins_at_end(head,tail,10);
    ins_at_beg(head,tail, 23);
    ins_at_end(head,tail,-33);

    printLL(head);
    cout << endl;
    cout <<"head : "<< head->data << endl;
    cout <<"tail : "<< tail->data << endl;

    ins_after_ele(head,tail,-33,17);
    printLL(head);
    cout << endl;
    cout <<"head : "<< head->data << endl;
    cout <<"tail : "<< tail->data << endl;

    ins_at_pos(head,tail,0,330);
    printLL(head);
    cout << endl;
    cout <<"head : "<< head->data << endl;
    cout <<"tail : "<< tail->data << endl;

    del_from_beg(head,tail);
    printLL(head);
    cout << endl;
    cout <<"head : "<< head->data << endl;
    cout <<"tail : "<< tail->data << endl;

    del_from_end(head,tail);
    printLL(head);
    cout << endl;
    cout <<"head : "<< head->data << endl;
    cout <<"tail : "<< tail->data << endl;

    del_from_pos(head,tail,3);
    printLL(head);
    cout << endl;
    cout <<"head : "<< head->data << endl;
    cout <<"tail : "<< tail->data << endl;

    bubbleSortLL(head);

    return 0; 
}