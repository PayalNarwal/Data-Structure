#include <iostream>
using namespace std;

void nPr(int n , int r){
    int nr = 1;
    for(int i = n; i > r; i--){
        nr = nr*i;
    }
    cout<< "The value of P(n,r) is: "<< nr << endl;
}

int main(){
    int n;
    int r;
    cin >> n ;
    cin >> r;

    nPr(n,r);
}