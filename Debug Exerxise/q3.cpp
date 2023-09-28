#include <iostream>
using namespace std;

void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j] = i+2;
        arr[j] = i+1;
        j++;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    populate(arr,n);
    return 0; 
}