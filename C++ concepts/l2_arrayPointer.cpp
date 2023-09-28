#include <iostream>
using namespace std;

int main(){

    int arr[10] = {1,2};
    cout << sizeof(arr) << endl;
    cout << sizeof(*arr) << endl;
    cout << sizeof(&arr) << endl;


    int *ptr = &arr[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
    
    return 0; 
}