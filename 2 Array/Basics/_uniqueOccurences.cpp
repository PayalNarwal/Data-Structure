#include <iostream>
using namespace std;

void uniqueOcc(int arr[],int size){
    int countArr[size] ;
    for(int i = 0; i < size; i++){
        int count = 1;
        for(int j=i+1; j<size ;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        countArr[i];

    } 
}

int main(){
    int arr[6]={2,2,3,3,3,1};
    int size = sizeof(arr)/sizeof(int);
    cout<<size;
    uniqueOcc(arr,size);
    // arr.size() -> vector ka size


}