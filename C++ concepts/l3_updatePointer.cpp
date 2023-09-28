#include <iostream>
using namespace std;

void updatePointer(int **p){
    // p = p +1;
    *p = *p +1;

}

int main(){
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    cout << endl;
    cout <<"    i :  "<<  i << endl;
    cout <<" *ptr :  "<< *ptr1 << endl;
    cout <<"**ptr2:  "<<**ptr2 << endl;
    cout << endl;
    updatePointer(ptr2);
    cout <<"    i :  "<<  i << endl;
    cout <<" *ptr :  "<< *ptr1 << endl;
    cout <<"**ptr2:  "<<**ptr2 << endl;
    cout << endl;
    cout <<"    i :  "<<  i << endl;
    cout <<" *ptr :  "<< *ptr1 << endl;
    cout <<"**ptr2:  "<<**ptr2 << endl;

    
    
    return 0; 
}