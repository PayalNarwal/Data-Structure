#include <iostream>
using namespace std;

void quickSort(int arr[], int st, int end){
    if(st>=end){
        return;
    }
    int pivot = end;
    int i = st-1;
    int j = st;

    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[j],arr[i]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);

    quickSort(arr,st,i-1);
    quickSort(arr,i+1,end);
}

int main(){
    int arr[] = {7,2,1,8,6,3,5,4};
    int size = 8;
    int st = 0;
    int end = size-1;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;
    quickSort(arr,st, end);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;
    return 0; 
}