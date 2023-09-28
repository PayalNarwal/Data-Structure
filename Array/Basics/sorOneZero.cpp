#include <iostream>
using namespace std;

void sortOneZero(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0)
        zeroCount++;
        else if(arr[i] == 1)
        oneCount++;
    } 
    int i = 0;
    while(zeroCount != 0){
        arr[i] = 0;
        zeroCount--;
        i++;
    }
    while(oneCount != 0){
        arr[i] = 1;
        oneCount--;
        i++;
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;
}

int main(){
    int arr[] = {0,1,0,1,1,0,0,1,0,1};
    int size = 10;

    sortOneZero(arr,size);


    return 0; 
}