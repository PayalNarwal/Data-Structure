#include <iostream>
using namespace std;

class op{
    public:
    int val;

    void operator +(op &obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout << (value1 - value2) << endl;
    }
};

int main(){
    op obj1, obj2;
    obj1.val = 7;
    obj2.val = 3;
    obj1+obj2;

    return 0; 
}