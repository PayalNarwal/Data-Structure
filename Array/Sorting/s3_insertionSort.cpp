#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    } 
    cout <<endl;
}

void insertionSort(int arr[], int n){
    // swap nhi kar rhe , shift kar rhe h 

}

int main(){
    cout << "Enter size(max 10) : " ;
    int n;
    cin >> n ;
    int arr[10];
    cout << "Enter elements  : " <<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i] ;
    } 

    printArray(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);
}