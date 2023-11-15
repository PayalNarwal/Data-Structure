#include <iostream>
#define max 5
using namespace std;

int CQ[max];
int front = -1;
int rear = -1;

void insCQ(int val){
    if((front == 0 && rear == max-1) || rear == front-1){
        cout << "Queue is full. Insertion not possible" << endl;
        return;
    }
    rear = (rear + 1)%max;
    CQ[rear] = val;
    if(front == -1){
        front = 0;
    }
}

int delCQ(){
    if(front == -1){
        cout << "Empty Queue. Deletion not possible" << endl;
        return -1;
    }
    int n = CQ[front];
    CQ[front] = 0;
    if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front+1)%max;
    }
    return n;
}

void printCQ(){
    if(front == -1){
        cout << "Empty Queue" << endl;
        return;
    }
    int i = front;
    while(i != rear){
        cout << CQ[i] << " ";
        i = (i+1)%max;
    }
    cout << CQ[i] << endl;
    return;
}


int main(){
    printCQ();
    insCQ(5);
    printCQ();
    insCQ(10);
    printCQ();
    insCQ(15);
    printCQ();
    insCQ(20);
    printCQ();
    insCQ(25);
    printCQ();
    insCQ(30);
    printCQ();

    delCQ();
    printCQ();
    delCQ();
    printCQ();
    delCQ();
    printCQ();
    insCQ(30);
    printCQ();
    return 0; 
}