#include <iostream>
using namespace std;

int peakIndex(int arr[],int n){
    int st = 0;
    int end = n - 1;
    int mid;
    while(st < end){
        // mid = st + (end-st)/2;
        mid = (st + end)/2;
        // cout << arr[mid-1] <<endl;
        // cout << arr[mid] <<endl;
        // cout << arr[mid+1] <<endl;
        if((arr[mid] > arr[mid-1]) && (arr[mid] > arr[mid + 1])){
            return mid;
        }
        // increasing part of mountain
        else if((arr[mid] >= arr[mid-1]) && (arr[mid] <= arr[mid + 1])){
            st = mid +1;
        }
        // decreasing part of mountain
        else{
            end = mid;
        }
    }
}

int main(){
    int arr[8] = {1,2,2,2,5,4,2,1};
    int arr2[5] = {3,5,3,2,0};
    
    cout << peakIndex(arr,11) <<endl;
    cout << peakIndex(arr2,5) <<endl;


}