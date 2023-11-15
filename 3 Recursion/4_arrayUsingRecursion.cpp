#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size, int index){
    if(index>=size){
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, size, index+1);
}

void printReverseArray(int arr[], int size, int index){
    if(index>=size){
        return;
    }
    printReverseArray(arr, size, index+1);
    cout << arr[index] << " ";
}

int search(int arr[], int size, int index, int target){
    if(index>=size){
        return -1;
    }
    if(arr[index] == target){
        return index;
    }
    return search(arr, size, index+1, target);
}

void printAllOccurences(int arr[], int size, int index, int target){
    if(index>=size){
        return;
    }
    if(arr[index] == target){
        cout << index << " ";
    }
    return printAllOccurences(arr, size, index+1, target);
}

void findMin(int arr[], int size, int index, int &mini){
    if(index >= size){
        return;
    }
    if(arr[index] < mini){
        mini = arr[index];
    }
    return findMin(arr, size, index+1, mini);
}

void findMax(int arr[], int size, int index, int& maxi){
    if(index >= size){
        return;
    }   
    maxi = max(maxi, arr[index]);
    return findMax(arr, size, index+1,maxi);
}


int main(){
    int arr[] = {1,2,3,4,3,1,4,4,2,4};
    int size = 10;
    int index = 0;

    printArray(arr, size, index);
    cout << endl;    

    printReverseArray(arr, size, index);
    cout << endl;

    int ans = search(arr,size,index,0);
    if(ans == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout <<"Element found at index: "<< ans << endl;
    }

    printAllOccurences(arr,size,index, 4);
    cout << endl;

    int mini = INT_MAX;
    findMin(arr, size, index, mini);
    cout <<"Minimum element : "<< mini << endl;

    int maxi = INT_MIN;
    findMax(arr, size, index, maxi);
    cout <<"Maximum element : "<< maxi << endl;


    return 0; 
}