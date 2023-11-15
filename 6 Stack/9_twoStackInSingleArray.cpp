#include <iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        for(int i = 0; i < size; i++){
            arr[i] = 0;
        } 
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data){
        if(top2 - top1 == 1){
            cout << "Overflow" << endl;
            return;
        }
        top1++;
        arr[top1] = data;
    }
    void push2(int data){
        if(top2 - top1 == 1){
            cout << "Overflow" << endl;
            return;
        }
        top2--;
        arr[top2] = data;
    }
    void pop1(){
        if(top1 == -1){
            cout << "Underflow" << endl;
            return;
        }
        arr[top1] = 0;
        top1--;
    }
    void pop2(){
        if(top2 == size){
            cout << "Underflow" << endl;
            return;
        }
        arr[top2] = 0;
        top2++;
    }
    void print(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        } 
        cout << endl;
    }
};

int main(){
    
    Stack st(7);
    st.push1(10);
    st.push1(20);
    st.push1(30);

    st.push2(40);

    st.push1(50);
    st.push1(100);
    // st.push1(200);
    // st.push1(200);

    // st.pop2();
    // st.pop2();

    st.print();
    
 
    return 0; 
}