#include <iostream>
using namespace std;

int main(){
    
    cout <<endl;
    int arr[10] = {2,5,6};

    cout << "Address of array first location : " <<endl;
    cout << "arr     : "<< arr <<endl;
    cout << "&arr[0] : "<< &arr[0] <<endl;
    cout << "&arr    : "<< &arr <<endl;

    cout << endl;

    cout << "Value at array first location + constant : " <<endl;
    cout << "*arr    : "<< *arr <<endl;
    cout << "*arr+0  : "<< *arr + 0 <<endl;
    cout << "*arr+1  : "<< *arr + 1 <<endl;
    cout << "*arr+2  : "<< *arr + 2 <<endl;
    // cout << "*arr-1  : "<< *arr - 1 <<endl;

    cout << endl;
    // arr[i] = *(arr + i)
    cout << "Value at different locations : " <<endl;
    
    cout << "arr[0]  : "<< arr[0] <<endl;
    cout << "arr[1]  : "<< arr[1] <<endl;
    cout << "arr[2]  : "<< arr[2] <<endl;
    cout << endl;
    // i[arr] = *(i+arr)
    
    cout << "0[arr]  : "<< 0[arr] <<endl;
    cout << "1[arr]  : "<< 1[arr] <<endl;
    cout << "2[arr]  : "<< 2[arr] <<endl;
    cout << endl;

    cout << "*(arr+0): "<< *(arr+0) <<endl;
    cout << "*(arr+1): "<< *(arr+1) <<endl;
    cout << "*(arr+2): "<< *(arr+2) <<endl;
    // cout << "*(arr-1): "<< *(arr-1) <<endl;
    cout << endl;

    cout << "*(0+arr): "<< *(0+arr) <<endl;
    cout << "*(1+arr): "<< *(1+arr) <<endl;
    cout << "*(2+arr): "<< *(2+arr) <<endl;

    cout << endl;
    

    return 0;
}
