#include <iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        this->size = 0;
    }

    void print(){
        for(int i=1; i<= size; i++){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }

    void insert(){
        int n;
        cout << "Enter the value : ";
        cin >> n;
        
        while(n != -1 && size<100){
            size++;        
            arr[size] = n; 
            int index = size;            
            while(index > 1){
                if(arr[index] > arr[index/2]){
                    swap(arr[index], arr[index/2]);
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

    void deleteTop(){
        if(size == 0){
            cout << "Heap is empty" << endl;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;
        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index +1;
            int largestElementIndex = index;

            // finding the index of the largest element out of parent, left child and right child
            if(leftIndex <= size && arr[leftIndex] > arr[largestElementIndex]){
                largestElementIndex = leftIndex;
            }
            if(rightIndex <= size && arr[rightIndex] > arr[largestElementIndex]){
                largestElementIndex = rightIndex;
            }

            if(index == largestElementIndex){
                break;
            }
            else{
                swap(arr[index],arr[largestElementIndex]);
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