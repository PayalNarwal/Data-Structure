#include <iostream>
using namespace std;

bool isPalindrome(int n){
    // 121 -> true
    // -121 -> false
    if(n>=0){
        int reversed = 0;
        int temp = n;
        while(temp != 0){
            int digit = temp % 10;          // last digit lane ke liye 
            reversed = reversed * 10 + digit; // ********
            temp = temp /10;                // last digit hatane ke liye 
        }
        return(n == reversed);
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin >> n ;

    int x = isPalindrome(n);
    cout << x <<endl;

}