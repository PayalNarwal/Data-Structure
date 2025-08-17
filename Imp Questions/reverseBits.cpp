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

long decimalToBinary(long n){
    int rem = 0;
    int i = 0;
    while(n>0){
        rem = rem + (n%2)*pow(10,i);
        n = n/2;
        i++;
    }
    return rem;
}

long binaryToDecimal(long n){
    int num = n; 
    long dec_value = 0; 
    int base = 1; 
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
    return dec_value; 
}

long reverse(long num) {
    long rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num;
}

long reverseBits(long n) {
    long bn = decimalToBinary(n);
    cout << bn << endl;

    bn = reverse(bn);
    cout << bn << endl;
    long dn = binaryToDecimal(bn);
    return dn;
    
}

int main(){
    long n = 0;
    cout << reverseBits(n) << endl;
    return 0; 
}