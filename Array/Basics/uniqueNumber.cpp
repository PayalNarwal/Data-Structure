#include <iostream>
using namespace std;

int uniqueNumber(int arr[],int size){
    int prod = 0;
    for(int i = 0; i < size; i++){
        prod = prod^arr[i];     // XOR a^a = 0 , a^0 = a
    } 
    return prod;
    

}

int main(){
    int arr[]={2,5,3,3,5};
    cout<< uniqueNumber(arr,5);


}