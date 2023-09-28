#include <iostream>
using namespace std;

void nCr(int n , int r){
    int nr = 1;
    int dr = 1;
    
    for(int i = n; i >= n-r+1; i--){
        nr = nr*i;
    }
    for(int i=r; i>=1; i--){
        dr = dr*i;
    }
    // cout << nr<<endl;
    // cout << dr<<endl;
    cout<< "The value of C(n,r) is: "<< nr/dr << endl;
}

int main(){

    int n;
    int r;
    cin >> n ;
    cin >> r;

    nCr(n,r);

}