#include <iostream>
#include <map>
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

void ins_at_beg(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = tail = newnode;
    }else{
        newnode->next = head;        
        head = newnode;
    }  
}
void printLL(Node* head, Node* tail){
    Node* temp = head;
    while(temp != tail){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
    cout << endl;
}

Node* startingOfCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast ->next;         
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;  
        }             
        if(fast == slow){
            break;;
        }
    }
    if(fast == NULL){
        cout << "No loop present" << endl;
        return NULL;
    }
    slow = head;
    while(fast != slow){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

int startingOfCycleM2(Node* head){
    Node* temp = head;
    map<Node* ,bool> m; 
    temp = head;
    while(temp->next != NULL){
        if(m[temp] == false){
            m[temp] = true;
            temp = temp->next;
        }
        else{
            return temp->data;
        }
    }
    cout << "No loop present" << endl;
    return -1;
}

void removeLoop(Node* &head){
    Node* st = startingOfCycle(head);
    if(st != NULL){
        Node* temp = st->next;
        while(temp->next != st){
            temp = temp->next;
        }
        temp->next = NULL;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    ins_at_beg(head, tail, 67);
    ins_at_beg(head, tail, 7);
    ins_at_beg(head, tail, 10);
    ins_at_beg(head, tail, 23);
    ins_at_beg(head, tail, -33);

    tail->next = head->next;
    
    printLL(head,tail); 
    cout << startingOfCycle(head)->data << endl;
    cout << startingOfCycleM2(head) << endl;

    removeLoop(head);

    printLL(head,tail); 
    cout << startingOfCycle(head)->data << endl;
    cout << startingOfCycleM2(head) << endl;
   
    return 0; 
}