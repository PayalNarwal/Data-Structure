#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> maxHeap;

    maxHeap.push(5);
    maxHeap.push(4);
    maxHeap.push(2);
    maxHeap.push(7);
    maxHeap.push(10);
    maxHeap.push(1);

    while(!maxHeap.empty()){
        cout << maxHeap.top() << endl;
        maxHeap.pop();
    }
    return 0; 
}