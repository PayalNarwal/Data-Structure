#include <iostream>
using namespace std;

int firstOcc(int arr[], int n , int val){
    int st = 0;
    int end = n-1;
    int mid;
    int ans = -1;
    while(st<=end){
        mid = st + (end-st)/2;
        cout << mid <<endl;
        if(val==arr[mid]){
            ans = mid;
            end = mid - 1;
        }else if(val > arr[mid]){
            st = mid +1;
        }else{
            end = mid -1;
        }
    }
    cout << "---" <<endl;
    return ans;
}
int lastOcc(int arr[], int n, int val){
    int st = 0;
    int end = n-1;
    int mid;
    int ans = -1;
    while(st<=end){
        mid = st + (end-st)/2;
        cout << mid <<endl;
        if(val==arr[mid]){
            ans = mid;
            st = mid +1;
        }else if(val > arr[mid]){
            st = mid +1;
        }else{
            end = mid -1;
        }
    }
    cout << "---" <<endl;
    return ans;
}


int main(){
    int arr[5] = {2,2,2,3,2};
    int val = 2;

    // for(int i = 0; i < 5; i++){
    //     if(arr[i]==val){
    //         cout << i <<" ";
    //         break;
    //     }
    // } 
    // for(int i = 4; i >= 0; i--){
    //     if(arr[i]==val){
    //         cout << i <<" ";
    //         break;
    //     }
    // } 

    // firstAndLastPosition(arr,5,val);
    pair<int,int> p;
    p.first = firstOcc(arr,5,val);
    p.second = lastOcc(arr,5,val);
    
    cout << p.first  << " ";
    cout << p.second <<endl;


}