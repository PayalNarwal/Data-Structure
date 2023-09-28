#include <iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i = 0; i < size-1; i=i+2){
        // swap(arr[i],arr[i+1]);
        int temp = arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    } 
}
void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    } 
    cout <<endl;
}

int main(){
    cout << "Linear Search" <<endl;
    int n;
    cout << "Enter size: " ;
    cin >> n ;
    cout << "Enter elements: " <<endl;
    int arr[10];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    } 
    printArray(arr,n);
    swapAlternate(arr,n);
    printArray(arr,n);

}