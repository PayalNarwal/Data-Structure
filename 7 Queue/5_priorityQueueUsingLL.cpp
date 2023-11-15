#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    int priority;
    Node* ptr;
    Node(int val, int priority){
        this->val = val;
        this->priority = priority;
        this->ptr = NULL;
    }
};
Node* front = NULL;
Node* rear = NULL;

void insPQ(int val, int p){
    Node* n = new Node(val, p);
    if(front == NULL){
        front = rear = n;
        return;
    }
    Node* temp = front;
    Node* prev = NULL;
    while(temp!=NULL && temp->priority <= p){
        prev = temp;
        temp = temp->ptr;
    }
    if(temp==front){
        n->ptr = front;
        front = n;
    }
    else if(prev==rear){
        rear->ptr = n;
        rear = n;
    }
    else{
        n->ptr = temp;
        prev->ptr = n;
    }
}

void delPQ(){
    if(front == NULL){
        cout << "Empty Queue. Deletion not possible" << endl;
    }
    Node* temp = front;
    int n = front->val;
    if(front == rear){
        front = rear =  NULL;
    }
    else{
        front = temp->ptr;
        temp->ptr = NULL;
    }
    delete temp;
    cout <<"Deleted element: " << n << endl;
}

void printPQ(){
    if(front == NULL){
        cout << "Empty PQ" << endl;
        return;
    }
    Node* temp = front;
    cout << "Elements: ";
    while(temp!=rear){
        cout << temp->val << " ";
        temp = temp->ptr;
    }
    cout << temp->val << endl;

    temp = front;
    cout << "Priority: ";
    while(temp!=rear){
        cout << temp->priority << "  ";
        temp = temp->ptr;
    }
    cout << temp->priority << endl;
}

int main(){
    printPQ();
    insPQ(10,1);
    printPQ();
    insPQ(20,2);
    printPQ();
    insPQ(30,3);
    printPQ();
    insPQ(40,4);
    printPQ();
    insPQ(25,2);
    printPQ();
    insPQ(5,0);
    printPQ();

    delPQ();
    printPQ();
    delPQ();
    printPQ();
    delPQ();
    printPQ();

    
    return 0; 
}