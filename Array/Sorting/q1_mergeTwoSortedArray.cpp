#include <iostream>
using namespace std;

void mergeSortedArray(int arr1[], int n1, int arr2[], int n2, int arr3[]){
    int i = 0, j = 0, k= 0;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n1){
        arr3[k++] = arr1[i++];
    }
    while(j < n2){
        arr3[k++] = arr2[j++];
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    } 
    cout <<endl;
}

int main(){
    int arr1[5] = {1,4,6,7,8};
    int arr2[3] = {2,3,9};

    int arr3[8];

    mergeSortedArray(arr1, 5, arr2, 3, arr3);
    printArray(arr3, 8);

}