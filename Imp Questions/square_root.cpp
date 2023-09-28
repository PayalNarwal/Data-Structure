#include <iostream>
using namespace std;

int sqrt(int n){
    // brute force 
    long long int i = 0;
    while(i<=n){
        if (n>=(i*i) && n<(i+1)*(i+1)){
            return i;
        }
        i=i+1;
    }
}

double Sqrt(long double n){
    long long int i = 0;
    long double ans = -1;
    cout << n <<endl;
    while(i<=n){
        if (n>=(i*i) && n<(i+1)*(i+1)){
            ans = i;   
        }
        i=i+1;
    }
    // cout << ans <<endl;

    long double d1 = 0.1;
    int j = 0;
    while(j <= 9){
        d1 = ans + (0.1)*j;
        if (n>=(d1*d1) && n<(d1+0.1)*(d1+0.1)){
            ans = d1;  
        }
        j++;
    }
    // cout << ans <<endl;

    long double d2 = 0.01;
    int k = 0;
    while(k <= 9){
        d2 = ans + (0.01)*k;
        if (n>=(d2*d2) && n<(d2+0.01)*(d2+0.01)){
            ans = d2;
        }
        k++;
    }
    // cout << ans <<endl;
    return ans;
}

int squareRoot(int n){
    int st = 0;
    int end = n;
    long long int mid = st + (end-st)/2;
    int ans = -1;
    while(st<=end){
        mid = st + (end-st)/2;
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if (square <n){
            ans = mid;
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;

}

int main(){
    // square root of a number 
    // int n=214600;
    int n = 39;
    // cout<< sqrt(n) << endl;
    // cout << squareRoot(n) <<endl;
    cout << Sqrt(n) <<endl;

}