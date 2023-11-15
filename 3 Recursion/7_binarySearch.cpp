#include <iostream>
using namespace std;

int binarySearch(int arr[], int st, int end, int target){
    if(st>end){
        return -1;
    }
    int mid = st + (end-st)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]>= target){
        return binarySearch(arr, st, mid-1, target);
    }
    else{
        return binarySearch(arr, mid+1, end, target);
    }
}

int main(){
    int arr[] = {10,20,40,60};
    int st = 0;
    int end = 3;
    int target = 40;
    cout << binarySearch(arr, st, end, target) << endl;
    return 0; 
}