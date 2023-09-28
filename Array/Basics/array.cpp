#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[10]={7,8};
    printArray(arr1,10);

    int arr2[10]={1,2,3,4,5};
    printArray(arr2,10);

    // SIZE OF ARRAY :
    int n = sizeof(arr1);   //40 bits
    cout<<n<<endl;
    
    int m = sizeof(arr1)/sizeof(int);   // size of int is 4 bits
    cout<<m<<endl;

    // ARRAY OF DIFFERENT TYPES :
    char ch[5] = {'a','b','c','r','p'};
    for(int i = 0; i<5; i++){
        cout << ch[i]<<" ";
    }
    cout<<endl;

    double db[5] = {1.2,2,3,9.8356666656};
    for(int i = 0; i<5; i++){
        cout << db[i]<<" ";
    }
    cout<<endl;

    float fl[5] = {1.2,2,3,9.8356666656};
    for(int i = 0; i<5; i++){
        cout << fl[i]<<" ";
    }
    cout<<endl;

    long lg[5] = {1345465,5,3,5,4567};
    for(int i = 0; i<5; i++){
        cout << lg[i]<<" ";
    }
    cout<<endl;
}