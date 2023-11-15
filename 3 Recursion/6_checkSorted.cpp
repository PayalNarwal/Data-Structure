#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index){
    if(index >= size){
        return true;
    }
    if(arr[index-1]<=arr[index]){
        return checkSorted(arr,size,index+1);
    }
    else{
        return false;
    }
}

int main(){
    int arr[] = {10,20,40,40};
    int size = 4;
    int index = 1;
    cout << checkSorted(arr,size,index) << endl;
    
    return 0; 
}