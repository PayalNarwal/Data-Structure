#include <iostream>
#include <stack>
using namespace std;

bool hasRedundantBracket(string str){
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else if(ch == ')'){
            int opCount = 0;
            while(!st.empty() && st.top() != '('){
                char temp = st.top();
                if(temp == '+' || temp == '-' || temp == '*' || temp == '/'){
                    opCount++;
                }
                st.pop();
            }
            st.pop();
            if(opCount == 0){
                return true;
            }   
        }
    } 
    return false;
}

int main(){
    string str = "(a+b*c)";
    bool ans = hasRedundantBracket(str);

    if(ans){
        cout << "has redundant bracket" << endl;
    }
    else{
        cout << "does not have redundant bracket" << endl;
    }
    return 0; 
}