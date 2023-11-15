#include <iostream>
#define max 10
using namespace std;

int Q[max];
int front = -1;
int rear = -1;

void insQ(int val){
    if(rear == max-1){
        cout << "Insertion not possible " << endl;
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear = rear + 1;
    Q[rear] = val;
}

int delQ(){
    if(front == -1){
        cout << "Empty Queue, Deletion not possible" << endl;
    }
    int n = Q[front];
    Q[front] = 0;
    if(front == rear){
        front = rear = -1;
    }
    else{
        front = front+1;
    }
    return n;
}

void printQ(){
    if(front == -1){
        cout << "Empty Queue" << endl;
        return;
    }
    for(int i=front; i<=rear; i++){
        cout << Q[i] << " ";
    }
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


    return 0; 
}