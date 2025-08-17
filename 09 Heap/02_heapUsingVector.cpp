#include <iostream>
#include <vector>
using namespace std;

class Heap{
    public:
    vector<int> v = {-1};
    int size;
    Heap(){
        this->size = 0;
    }

    void insert(){
        int n;
        cout << "Enter the value : ";
        cin >> n;
        
        while(n != -1 && size<100){
            size++;        
            v[size] = n;
            int index = size;            
            while(index > 1){
                if(v[index] > v[index/2]){
                    swap(v[index], v[index/2]);
                    index = index/2;
                }
                else{
                    break;
                }
            }
            print();
            cout << "Enter the value : ";
            cin >> n;                        
        }
    }

    void print(){
        for(int i=1; i<= size; i++){
            cout << v[i] <<" ";
        }
        cout << endl;
    }

    void deleteTop(){
        if(size == 0){
            cout << "Heap is empty" << endl;
        }
        v[1] = v[size];
        size--;
        int index = 1;
        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index +1;
            int largestElementIndex = index;

            // finding the index of the largest element out of parent, left child and right child
            if(leftIndex <= size && v[leftIndex] > v[largestElementIndex]){
                largestElementIndex = leftIndex;
            }
            if(rightIndex <= size && v[rightIndex] > v[largestElementIndex]){
                largestElementIndex = rightIndex;
            }

            if(index == largestElementIndex){
                break;
            }
            else{
                swap(v[index],v[largestElementIndex]);
                index = largestElementIndex;
            }
            print();
        }
    }
};

int main(){
    Heap h;
    h.insert();
    h.deleteTop();
    return 0; 
}