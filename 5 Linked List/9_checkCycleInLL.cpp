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

bool hasCycle(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != slow){
        fast = fast ->next;        
        if(fast == NULL){
            return false;
        }
        else{
            fast = fast->next;
            if(fast == NULL){
                return false;
            }
            slow = slow->next;
        }
    }
    return true;
}
bool hasCycleM3(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast ->next;         
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;  
        }             
        if(fast == slow){
            return true;
        }
    }
    return false;
}

bool hasCycleM2(Node* head){
    Node* temp = head;
    map<Node* ,bool> m; 
    temp = head;
    while(temp->next != NULL){
        if(m[temp] == false){
            m[temp] = true;
            temp = temp->next;
        }
        else{
            return true;
        }
    }
    return false;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    ins_at_beg(head, tail, 67);
    ins_at_beg(head, tail, 7);
    ins_at_beg(head, tail, 10);
    ins_at_beg(head, tail, 23);
    ins_at_beg(head, tail, -33);

    // tail->next = head->next->next;
    
    printLL(head,tail); 
    cout << hasCycle(head) << endl;
    cout << hasCycleM2(head) << endl;
    return 0; 
}