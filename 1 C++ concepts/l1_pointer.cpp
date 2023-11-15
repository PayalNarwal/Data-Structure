#include <iostream>
using namespace std;

int main(){
    int num = 5;
    cout << "  num : " << num <<endl;    // value of num variable  
    cout << " &num : " << &num <<endl;  // address of num variable -> address operator (&)

    int *ptr1 = &num;
    // pointer -> stores address
    // ptr1 is a pointer to int
    // dereference operator (*) -> value operator

    cout << " ptr1 : " << ptr1 <<endl;  // address pointed by ptr1
    cout << "*ptr1 : " << *ptr1 <<endl; // value at address pointed by ptr1
    cout << "&ptr1 : " << &ptr1 <<endl;   // address of pointer 
    cout << "++ *ptr1 : " << ++*ptr1 <<endl; // incrementing value at address pointed by ptr1

    // size of variable and pointer
    cout << "Size of integer num : "<< sizeof(num) <<endl;
    cout << "Size of pointer ptr1 : "<< sizeof(ptr1) <<endl;

    cout <<"------------------------------------------------"<<endl;

    double d = 11.8;
    double *ptr2 = &d;

    cout <<"  d   : "<< d <<endl;   //-> 11.8
    cout <<" &d   : "<< &d <<endl;  //-> address of d
    cout <<" ptr2 : "<< ptr2 <<endl;   //-> address of d
    cout <<"*ptr2 : "<< *ptr2 <<endl;  //-> 11.8  (value at address pointed by ptr)
    cout <<"&ptr2 : "<< &ptr2 <<endl;  //-> address of ptr
    cout <<"++ *ptr2 : "<< ++ *ptr2 <<endl;  //-> 12.8  (increment value at address pointed by ptr)
    cout << "Size of double d : "<< sizeof(d) <<endl;
    cout << "Size of pointer ptr2 : "<< sizeof(ptr2) <<endl;

    // cout <<"------------------------------------------------"<<endl;

    // pointer to in is created and it is pointing to some garbage value
    // int *ptr3 = 0;      // null pointer
    // cout << ptr3 <<endl;
    // cout << *ptr3 <<endl;    // segmentation fault
    // cout << &ptr3 <<endl;
    
    cout <<"------------------------------------------------"<<endl;

    // copying a pointer 
    int *ptr4 = ptr1;
    cout << " ptr4 : "<< ptr4 <<endl;
    cout << "*ptr4 : "<< *ptr4 <<endl;    // ******
    cout << "&ptr4 : "<< &ptr4 <<endl;



}