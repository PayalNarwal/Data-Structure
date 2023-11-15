#include <iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    Stack(){
        arr = new int[0];
        this->size = 0;
        this->top = -1;
    }

    void push(int data){
        if(top == size-1){
            cout << "Overflow" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }
    void pop(){
        if(top == -1){
            cout << "Underflow" << endl;
            return;
        }
        top--;
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
    int getSize(){
        return top+1;
    }
    int getTop(){
        return arr[top];
    }
};

int main(){
    
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << st.empty() << endl;
    cout << st.getSize() << endl;
    cout << st.getTop() << endl;

    st.pop();
    cout << st.getSize() << endl;
    cout << st.getTop() << endl;
 
    return 0; 
}