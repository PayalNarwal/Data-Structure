#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    } 
    cout <<endl;
}

void bubbleSort(int arr[],int n ){
    // largest element ko last position pe le jana h

    for(int i = 1; i < n; i++){
        // for round 1 to n-1
        bool swapped = false;
        for (int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }  
        if(!swapped){
            break;
        }
    } 
    // Time complexity -> O(n^2) 
    // Space complexity -> O(1)  
    // in place sort ?
    // stable or unstable ?
}

void bubbleSortDesc(int arr[],int n ){

    for(int i = 1; i < n; i++){
        bool swapped = true;
        for (int j = 0; j < n-i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
                printArray(arr,n);
                swapped = false;
            }
        }  
        cout << "-----------" << endl;
        printArray(arr,n);
        cout << "-----------" << endl;
        if(swapped){
            break;
        }
    } 
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
    // bubbleSort(arr,n);
    // printArray(arr,n);
    bubbleSortDesc(arr,n);
    printArray(arr,n);

}