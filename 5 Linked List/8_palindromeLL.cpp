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

Node* middleNode(Node* head) {  
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL){
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode = NULL;
    while(curr != NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

bool isPalindrome(Node* head){
    if(head==NULL){
        cout << "Empty linked list" << endl;
        return false;
    }
    Node* l1 = head;
    Node* mid = middleNode(head);
    Node* l2 = mid->next;
    mid->next = NULL;
    l2 = reverse(l2);
    while(l2 != NULL){
        if(l2->data == l1->data){
            l2 = l2->next;
            l1 = l1->next;
        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    Node* head = NULL;

    ins_at_beg(head,6);
    ins_at_beg(head,70);
    ins_at_beg(head,10);
    ins_at_beg(head, 70);
    ins_at_beg(head,6);

    printLL(head); 
    cout << isPalindrome(head) << endl;
    
    return 0; 
}