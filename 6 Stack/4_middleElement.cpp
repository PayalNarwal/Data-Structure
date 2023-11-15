#include <iostream>
#include <stack>
using namespace std;

int solve(stack<int> st, int pos){
    if(pos == 1){
        return st.top();
    }

    int temp = st.top();
    pos--;
    st.pop();

    return solve(st, pos);

    st.push(temp);
}

int middleElement(stack<int> st){
    if(st.empty()){
        cout << "Stack is empty. No middle element." << endl;
        return -1;
    }
    else{
        int size = st.size();
        int pos = -1;
        if(size % 2 == 0){
            // even
            pos = size/2;
        }
        else{
            // odd
            pos = size/2 +1;
        }
        int mid = solve(st,pos);
        return mid;
    }

}

int main(){
    
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    
    int ans = middleElement(st);
    cout << ans << endl;


}