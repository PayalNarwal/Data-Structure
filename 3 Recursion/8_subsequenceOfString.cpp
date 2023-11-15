#include <iostream>
using namespace std;

void subsequence(string s, int i, string op){
    if(i>=s.length()){
        cout << op << endl;
        return;
    }
    // include
    op.push_back(s[i]);
    subsequence(s,i+1,op);

    // exclude
    op.pop_back();
    subsequence(s,i+1,op);
}

int main(){
    string s = "abc";
    int i = 0;
    string op = "";
    subsequence(s,i,op);
    return 0; 
}