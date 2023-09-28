#include <iostream>
using namespace std;

void isPrime(int n){
    bool flag = 1;
    for(int i = 2; i<n;i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    switch (flag){
    case 1:cout << "prime number";break;
    case 0:cout << "not a prime number";break;
    }
}

int main(){
    int n;
    cin>>n;
    isPrime(n);
}