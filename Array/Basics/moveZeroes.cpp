#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeroes(vector<int> v){
    int size = v.size();
    int k = 0;
    for(int i = 0; i < size; i++){
        if(v[i] != 0){
            v[k++] = v[i];
        }
    } 

    while(k < size){
        v[k++] = 0;
    }

    return v;
}

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    } 
    cout << endl;
}

int main(){
    cout << "Enter the number of elements : " ;
    int n;
    cin >> n ;
    cout << "Enter the element in the vector : " <<endl;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m ;
        v.push_back(m);
    } 

    // v -> [5 0 3 0 0 7 0]

    printVector(v);
    vector<int> rev_v = moveZeroes(v);
    printVector(rev_v);

}