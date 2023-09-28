#include <iostream>
using namespace std;

int pivotInteger(int n){
    int s = (n*(n+1))/2;
    int x=1;
    int s1 = 0;
    int s2 = 0;
    while(x <= n){
        cout <<"x : "<< x <<endl;
        s1 = s1 + x;
        cout <<"s1 : "<< s1 <<endl;
        s2 = s-s1+x;
        cout <<"s2 : "<< s2 <<endl;
        if(s1 == s2){
            return x;
        }
        x++;   
    }
    return -1;
}


int main(){
    int n = 3;
    int x = pivotInteger(n);
    cout << x <<endl;
}