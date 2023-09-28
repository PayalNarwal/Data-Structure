#include <iostream>
using namespace std;

void linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return;
        }
    }
    return;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    linearSearch(arr,n,5);
    return 0; 
}
