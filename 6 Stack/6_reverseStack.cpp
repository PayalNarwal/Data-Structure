#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int temp = st.top();
    st.pop();

    insertAtBottom(st,val);

    st.push(temp);
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int temp = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st,temp);
}

void printStack(stack<int> s){
    while(!s.empty()){
        cout <<s.top()<<" " ;
        s.pop();
    }
    cout<< endl;
}

int main(){

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    printStack(st);
    
    insertAtBottom(st,1000);
    printStack(st);

    reverseStack(st);
    printStack(st);
    return 0; 
}