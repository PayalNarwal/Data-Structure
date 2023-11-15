#include <iostream>
using namespace std;

int main(){
    int i = 3;
    int *t = &i;
    cout << (*t) ++ << endl;
    cout << ++ (*t) <<endl;

    cout << &i <<endl;
    cout << t <<endl;
    cout << &t <<endl <<endl;

    t = t+1;    // int -> 4 byte

    cout << &i <<endl;
    cout << t <<endl;
    cout << &t <<endl;

}