#include <iostream>
#define max 20
#define nop 4
using namespace std;

int PQ[max] = {0};
int size = max/nop;
int front[nop];
int rear[nop];

void insPQ(int val , int p){
    if(p>=nop){
        cout << "Insertion not possible. Priority doesn't exist." << endl;
        return;
    }
    if(rear[p] == (size*(p+1)-1)){
        cout << "Insertion not possible. The priority queue segment is full." << endl;
        return;
    }
    if(front[p] == -1){
        front[p] = rear[p] = size*p;
        PQ[rear[p]] = val;
        return;
    }
    rear[p] = rear[p] +1;
    PQ[rear[p]] = val;
}

void delPQ(int p){
    if(p>=nop){
        cout << "Deletion not possible. Priority doesn't exist." << endl;
        return;
    }
    if(front[p] == -1){
        cout << "Deletion not possible. The priority queue segment is empty." << endl;
        return;
    }
    int x = PQ[front[p]];
    if(front[p] == rear[p]){
        PQ[front[p]] = 0;
        front[p] = -1;
    }
    else{
        PQ[front[p]] = 0;
        front[p] = front[p]+1;
    } 
    cout << "Deleted element : " << x<< endl;
}

void printPQ(){
    for(int i = 0; i < max; i++){
        if(i%size == 0){
            cout << "| " ;
        }
        cout << PQ[i] << " ";     
    } 
    cout << "| "<< endl;
}

void printArray(int arr[]){
    for(int i = 0; i < nop; i++){
        cout << arr[i] << " ";     
    } 
    cout << endl;
}

int main(){
    for(int i = 0; i < nop; i++){
        front[i] = -1;
    } 
    for(int i = 0; i < nop; i++){
        rear[i] = -1;
    } 
    printArray(front);
    printArray(rear);
    printPQ();
    insPQ(10,1);
    printPQ();
    insPQ(20,2);
    printPQ();
    insPQ(30,3);
    printPQ();
    // insPQ(40,4);
    // printPQ();
    insPQ(25,2);
    printPQ();
    insPQ(5,0);
    printPQ();
    insPQ(10,1);
    printPQ();
    insPQ(20,2);
    printPQ();
    insPQ(60,3);
    printPQ();
    insPQ(45,2);
    printPQ();
    insPQ(15,0);
    printPQ();
    insPQ(75,2);
    printPQ();
    // insPQ(25,2);
    // printPQ();
    printArray(front);


    delPQ(1);
    printPQ();
    printArray(front);

    delPQ(3);
    printPQ();
    printArray(front);

    delPQ(4);
    printPQ();
    printArray(front);

    delPQ(1);
    printPQ();
    printArray(front);

    delPQ(1);
    printPQ();
    printArray(front);
    delPQ(2);
    printArray(front);

    printPQ();

    return 0; 
}