#include <iostream>
using namespace std;

class A{
    public:
    string name;
};
class B: public A{
    public:
    int python;
    B(){
        python = 50;
    }
    void getDetails(){
        cout << name << endl;
        cout << python << endl;
    }
};
class C: public A{
    public:
    int dataScience;
    C(){
        dataScience = 100;
    }
    void getDetails(){
        cout << name << endl;
        cout << dataScience << endl;
    }
    
};

int main(){
    B s1;
    C s2;
    s1.name = "student1";
    s2.name = "student2";

    // cout << s1.dataScience << endl;
    s1.getDetails();
    s2.getDetails();
    return 0; 
}