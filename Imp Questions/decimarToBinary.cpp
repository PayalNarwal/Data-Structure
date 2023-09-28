#include <iostream>
using namespace std;

int pow(int a, int b){
    int ans = 1;
    while(b>=1){
        ans = ans*a;
        b--;
    }
    return ans;
}

void decimalToBinary(int n){
    int rem = 0;
    int i = 0;
    while(n>0){
        rem = rem + (n%2)*pow(10,i);
        n = n/2;
        i++;
    }
    cout << rem <<endl;
}

void decimalToBinaryM2(int n){
    int rem = 0;
    int i = 0;
    while(n>0){
        rem = rem + (n&1)*pow(10,i);   // bitwise and with 1
        n = n >> 1;  // right shift 
        i++;
    }
    cout << rem <<endl;
}

int main(){
    int n;
    cout << "Enter decimal number: " ;
    cin >> n ;
    decimalToBinary(n);
    decimalToBinaryM2(n);
}