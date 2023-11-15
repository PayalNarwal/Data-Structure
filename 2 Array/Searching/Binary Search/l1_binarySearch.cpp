#include <iostream>
using namespace std;

int binarySearch(int arr[], int size,int val){
    int st = 0;
    int end = size - 1;
    // int mid = (st+end)/2;
    int mid;
    while(st<=end){
        // mid = (st+end)/2;
        mid = st + (end-st)/2;
        if(val == arr[mid]){
            return mid;
        }
        else if(val > arr[mid]){
            st = mid+1;

        }else{
            end = mid-1;
        }

        // mid = (st+end)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] {3,8,11,14,16};
    
    cout << "Index is : " << binarySearch(even,6,2) <<endl;
    cout << "Index is : " << binarySearch(even,6,4) <<endl;
    cout << "Index is : " << binarySearch(even,6,6) <<endl;
    cout << "Index is : " << binarySearch(even,6,8) <<endl;
    cout << "Index is : " << binarySearch(even,6,12) <<endl;
    cout << "Index is : " << binarySearch(even,6,18) <<endl;
    cout << "Index is : " << binarySearch(even,6,15) <<endl;


    cout << "Index is : " << binarySearch(odd,5,3) <<endl;
    cout << "Index is : " << binarySearch(odd,5,8) <<endl;
    cout << "Index is : " << binarySearch(odd,5,11) <<endl;
    cout << "Index is : " << binarySearch(odd,5,14) <<endl;
    cout << "Index is : " << binarySearch(odd,5,16) <<endl;
    cout << "Index is : " << binarySearch(odd,5,15) <<endl;


} 