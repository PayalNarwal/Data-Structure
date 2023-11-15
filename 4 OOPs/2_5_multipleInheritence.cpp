#include <iostream>
using namespace std;

class A{
    public:
    int maths;
};
class B{
    public:
    int python;
};
class C: public A, public B{
    public:
    int dataScience;
    void getMarks(){
        dataScience = maths + python;
        cout << dataScience << endl;
    }
};

int main(){
    C s1;
    s1.maths = 98;
    s1.python = 95;
    // cout << s1.dataScience << endl;
    s1.getMarks();
    return 0; 
}