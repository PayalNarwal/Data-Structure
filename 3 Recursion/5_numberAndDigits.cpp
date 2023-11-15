#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void getDigits(int n){
    if(n == 0){
        return;
    }
    int digit = n%10;
    n = n/10;
    return getDigits(n);
    cout << digit << endl;
}


void getNumber(vector<int> &v, int &ans, int i){
    if(v.size()<=0){
        return;
    }
    int digit = v[v.size()-1];
    ans = ans + digit*pow(10,i);
    v.pop_back();
    return getNumber(v,ans,i+1);
}

int main(){
    // vector<int> v = {9,9,9};
    // cout << pow(10,0) << endl;
    // int ans = 0;
    // int i = 0;
    // getNumber(v,ans,i);
    // cout << ans << endl;
    int n = 4217;
    getDigits(n);
    return 0; 
}