#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* ptr; 
    Node(int val){
        this->val = val;
        this->ptr = NULL;
    }
};
Node* front = NULL;
Node* rear = NULL;

void insQ(int val){
    Node* n = new Node(val);
    if(front == NULL){
        front = rear = n;
        front->ptr = rear;
        return;
    }
    n->ptr = rear;
    rear = n; 
    front->ptr = rear;
}

void delQ(){
    if(front == NULL){
        cout << "Empty Queue. Deletion not possible" << endl;
    }
    Node* temp = rear;
    int n = front->val;
    if(front == rear){
        front = rear =  NULL;
    }
    else{
        while(temp->ptr != front){
            temp = temp->ptr;
        }
        front = temp;
        temp = temp->ptr;
        front->ptr = rear;
    }
    delete temp;
    cout <<"Deleted element: " << n << endl;
}

void printQ(){
    if(front == NULL){
        cout << "Empty Queue" << endl;
        return;
    }
    Node* temp = rear;
    while(temp!=front){
        cout << temp->val << " ";
        temp = temp->ptr;
    }
    cout << temp->val << " ";
    cout << endl;
}

int main(){
    printQ();
    insQ(5);
    printQ();
    insQ(10);
    printQ();
    insQ(15);
    printQ();
    insQ(20);
    printQ();
    insQ(25);
    printQ();
    insQ(30);
    printQ();

    delQ();
    printQ();
    delQ();
    printQ();
    delQ();
    printQ();
    insQ(70);
    printQ();
    return 0; 
}