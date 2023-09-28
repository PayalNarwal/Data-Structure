#include <iostream>
using namespace std;

void linear_search(int arr[],int size){
    int value;
    cout << "Enter element to search : " ;
    cin >> value ;

    int i;
    for(i = 0; i < size; i++){
        if(arr[i]==value){
            cout << "Element found at index " <<i;
            break;
        }
    }
    if(i==size){
        cout << "Element not found " <<endl;
    }
    
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
    linear_search(arr,n);

    

}