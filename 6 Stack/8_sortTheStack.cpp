#include <iostream>
#include <stack>
using namespace std;

void insertInSortedStack(stack<int> &st, int val){
    if((st.empty()) || (st.top() < val)){
        st.push(val);
        return;
    }
    int temp = st.top();
    st.pop();

    insertInSortedStack(st,val);
    
    // backtracking
    st.push(temp);
}

void sortStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();

    sortStack(st);

    insertInSortedStack(st,temp);
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
    st.push(20);
    st.push(10);
    st.push(50);
    st.push(60);
    st.push(30);
    st.push(40);
    printStack(st);
    sortStack(st);
    printStack(st);
    return 0; 
}