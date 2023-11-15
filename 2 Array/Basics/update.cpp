#include <iostream>
using namespace std;

// void updateArr(int arr[],int size){
//     arr[0]= 210;
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     } 
//     cout <<endl;
// }
void printArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int size;
    cout << "Enter size : " <<endl;
    cin >> size;
    int arr[100];
    for(int i = 0; i < size; i++){
        cin >> arr[i] ;
    } 
    printArray(arr,size);
    // updateArr(arr,size);
    // for(int i = 0; i < size; i++){
    //     cout << arr[i] <<" ";
    // } 

}