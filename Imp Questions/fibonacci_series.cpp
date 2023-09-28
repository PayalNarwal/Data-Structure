#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    int c = a+b;

    cout << "Enter n : ";
    int n;
    cin >> n;
    cout << a << ",";
    cout << b<<",";
    int i = 3;
    while(i<=n){
        cout<< c<<",";
        a = b;
        b = c;
        c = a+b ;
        i++;
    }
}