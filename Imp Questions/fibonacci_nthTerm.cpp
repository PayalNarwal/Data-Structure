#include <iostream>
using namespace std;

int fib(int n ){
    int a = 0;
    int b = 1;
    int c =a+b; 
    if(n==1){
        return a;
    }else if(n==2){
        return b;
    }
    int i = 3;
    while(i<=n){
        if(i==n){
            return c;
        }
        a = b; 
        b = c; 
        c = a+b ; 
        i++;
    }  
}
int main(){
    cout << "Enter n : ";
    int n;
    cin >> n;

    cout << fib(n);
}