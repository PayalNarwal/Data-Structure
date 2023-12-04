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

Node* addTwoNums(Node* head1, Node* head2){
    head1 = reverse(head1);
    head2 = reverse(head2);
    Node* ans = NULL;
    int carry = 0;
    while(head1 != NULL && head2 != NULL){
        int total = head1->data + head2->data + carry;
        int digit = total %10;
        carry = total/10;
        ins_at_beg(ans,digit);
        head1 = head1->next;
        head2 = head2->next;
    }
    while(head1 != NULL){
        int total = head1->data + carry;
        int digit = total %10;
        carry = total/10;
        ins_at_beg(ans,digit);
        head1 = head1->next;
    }    
    while(head2 != NULL){
        int total = head2->data + carry;
        int digit = total%10;
        carry = total/10;
        ins_at_beg(ans,digit);
        head2 = head2->next;
    }
    if(carry != 0){
        ins_at_beg(ans,carry);
    }

    return ans;
}

int main(){
    Node* head1 = NULL;
    ins_at_beg(head1,9);
    ins_at_beg(head1,9);
    ins_at_beg(head1,6);
    ins_at_beg(head1,9);
    printLL(head1);
    
    Node* head2 = NULL;
    ins_at_beg(head2,9);
    ins_at_beg(head2,3);
    ins_at_beg(head2,9);
    ins_at_beg(head2,1);
    ins_at_beg(head2,5);
    printLL(head2);
    cout << endl;

    Node* sum = addTwoNums(head1,head2);
    printLL(sum);
    return 0; 
}