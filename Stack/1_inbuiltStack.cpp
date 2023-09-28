#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s){
    while(!s.empty()){
        cout <<"|"<< s.top()<<"|" << endl;
        s.pop();
    }
    cout << "----" << endl;

}

int main(){

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    printStack(st);


    cout << st.top() << endl;
    cout << st.size() << endl;

    st.pop();
    printStack(st);

    cout << st.top() << endl;
    cout << st.size() << endl;

    // cout << st.empty() << endl;



    
    return 0; 
}