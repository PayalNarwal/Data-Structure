#include <iostream>
using namespace std;

int reverse(int x) {

    if ((-(x) <= 2147483648) && ((x + 1) <= 2147483648)){
        return 0;
    }
    else{
        long long int rev = 0;
        long long int temp = x;
        while(x != 0){
            int digit = x % 10;
            rev = rev *10 + digit;
            x = x/10;
        }
        return rev;
    }
}

int main(){
    cout << reverse(1534236469) <<endl;

}