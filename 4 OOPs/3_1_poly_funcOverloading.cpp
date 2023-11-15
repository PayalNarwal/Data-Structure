#include <iostream>
using namespace std;

class Maths{
    public:
    int sum(int a , int b){
        cout << "Inside sum1" << endl;
        return a+b;
    }
    int sum(int a, int b, int c){
        cout << "Inside sum2" << endl;
        return a+b+c;
    }
    int sum(int a, float b){
        cout << "Inside sum3" << endl;
        return a+b;
    }
    int sum(int a, double b){
        cout << "Inside sum4" << endl;
        return a+b;
    }
    
};


int main(){
    
    Maths a;
    cout <<  a.sum(1,2) << endl;
    cout <<  a.sum(1,2,3) << endl;
    cout <<  a.sum(1,2.3f) << endl;
    cout <<  a.sum(1,2.3) << endl;

    return 0;
}