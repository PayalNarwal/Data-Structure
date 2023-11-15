#include <iostream>
using namespace std;

int climb(int n){
    if (n==1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    return climb(n-1) + climb(n-2);
}

int main(){
    cout << climb(5) << endl;
    return 0; 
}