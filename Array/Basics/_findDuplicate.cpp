#include <iostream>
using namespace std;

int duplicateElement(int arr[],int n){
    int sum1 = ((n-1)*n)/2;
    int sum2=0;
    for(int i = 0; i < n; i++){
        sum2 = sum2 + arr[i];
    } 
    return (sum2-sum1);
}


int main(){
    int n;
    cout << "Enter size: " ;
    cin >> n ;
    cout << "Enter elements: " <<endl;
    int arr[10];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    } 

    cout << duplicateElement(arr,n);
}