#include <iostream>
using namespace std;

void bitwise_and(){
    // a && b -> and
    // a & b -> bitwise and
    
    int a = 4;
    int b = 6;

    cout << "a&b : "<<(a&b)<<endl;
    cout << "a|b : "<<(a|b)<<endl;
    cout << " ~a : "<<(~a)<<endl;  // ~a -> bitwise not
    cout << "a^b : "<<(a^b)<<endl;

    // a^b -> bitwise xor
    // gives 0 when both bit are same
    
}

void bitwise_or(){
    // a||b -> or
    // a|b -> bitwise or
    // 10111 | 00001 = 10111
    // 10110 | 00001 = 10111
    
    int b = 21|1;
    cout<< b ;

}

void shift(){
    cout << "17>>1 : " << (17>>1) << endl;
    cout << "17>>2 : " << (17>>2) << endl;
    cout << "19<<1 : " << (19<<1) << endl;
    cout << "19<<2 : " << (19<<2) << endl;
}

void even_odd(){
    // 2 -> 10 & 01 = 00
    // xxxx1 & 00001 = true
    // xxxx0 & 00001 = false
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if(n&1){   
        cout<< "odd no";
    }else{
        cout<< "even no";
    }
}

int main(){

    bitwise_and();
    shift();
}