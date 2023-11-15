#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(vector<int> v, int m){
    // int l = v.size();
    // for(int i = 0; i < l/2; i++){
    //     swap(v[i],v[l-i-1]);
    // } 

    int st = m + 1;
    int end = v.size() - 1;
    while(st < end){
        swap(v[st],v[end]);
        st++;
        end--;
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

    cout << "Enter the index after which you want to swap : " ;
    int m;
    cin >> m ;

    printVector(v);
    vector<int> rev_v = reverseVector(v,m);
    printVector(rev_v);
    
}