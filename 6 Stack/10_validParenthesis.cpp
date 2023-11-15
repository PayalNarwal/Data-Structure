#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str){
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(!st.empty()){                
                if(ch==']' && st.top() == '['){
                    st.pop();
                }
                else if(ch=='}' && st.top() == '{'){
                    st.pop();
                }
                else if(ch==')' && st.top() == '('){
                    st.pop();
                }               
                else{
                    // string me closing bracket h and stack me uska opening braket nhi h
                    // matlab koi closing bracket ka opening galt h
                    return false;
                }
            }
            else{
                // string me closing bracket h par stack empty h
                // matlab koi closing bracket extra h
                return false;
            }
        }
    } 
    if(st.empty()){
        // string puri check karli aur stack bhi empty h 
        // valid h
        return true;
    }
    else{
        // string puri check karli par stack empty nhi h 
        // matlab koi opening bracket extra h
        return false;
    }
}

int main(){
    string str = "{[()]}";
    bool ans = isValid(str);

    if(ans){
        cout << "valid parenthesis string" << endl;
    }
    else{
        cout << "Not a valid parenthesis string" << endl;
    }
    return 0; 
}