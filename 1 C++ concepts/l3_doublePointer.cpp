#include <iostream>
using namespace std;

int main(){
    
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << endl;
    cout <<"    i :  "<<  i << endl;
    cout <<" *ptr :  "<< *ptr << endl;
    cout <<"**ptr2:  "<<**ptr2 << endl;
    cout << endl;
    cout <<"   &i :  "<< &i << endl;
    cout <<"  ptr :  "<< ptr << endl;
    cout <<"*ptr2 :  "<< *ptr2 << endl;
    cout << endl;
    cout <<" &ptr :  "<< &ptr << endl;
    cout <<" ptr2 :  "<< ptr2 << endl;
    cout << endl;
    cout <<"&ptr2 :  "<< &ptr2 << endl;

    return 0; 
}