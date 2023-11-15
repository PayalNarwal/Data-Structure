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

int getLength(Node* node){
    Node* temp = node;
    int i = 0;
    while(temp != NULL){
        i++;
        temp = temp->next;
    }
    return i;
}

Node* middleNodeM1(Node* head){
    int n = getLength(head);
    int mid = n/2 + 1;
    int i = 1;
    Node* temp = head;
    while(i != mid){
        i++;
        temp = temp->next;
    }
    return temp;
}

Node* middleNodeM2(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
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
    printLL(middleNodeM1(head));
    printLL(middleNodeM2(head));


    return 0; 
}