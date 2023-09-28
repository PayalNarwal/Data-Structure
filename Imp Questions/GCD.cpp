#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a>b){
        if(a%b == 0){
            return b;
        }
        else{
            return gcd(b, a%b);
        }
    }
    else{
        return gcd(b,a);
    }
}

int main(){
    cout << "Enter first number : " ;
    int a;
    cin >> a ;
    cout << "Enter second number : " ;
    int b;
    cin >> b ;
  
    int ans = gcd(a, b);
    cout <<"GCD or HCF is : " <<ans <<endl;


}