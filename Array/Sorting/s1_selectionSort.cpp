#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    } 
    cout <<endl;
}

void selectionSort(int arr[], int n){
    // minimum element ko aage lana h 

    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    } 
    // Space complexity -> O(1)
    // Time complexity -> O(n^2)

    // Stable algorithm=/

}

int main(){
    cout << "Enter number of elements in array : ";
    int n;
    cin >> n ;
    int arr[10];
    cout << "Enter elements : " <<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i] ;
    } 

    printArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);
    
}