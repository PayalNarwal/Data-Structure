// priority queue as multiple queues
// using both LL & array data structures
#include <iostream>
using namespace std;
#include "vector"

class node {
    public :
    int val;
    node * ptr;
};

class addresses {
    public:
    node* first = NULL;
    node* last = NULL;
};

vector<addresses*> v;

void insertPLL(int val, node** first, node** last) {
    node* n = new node;
    n -> val = val;
    n -> ptr = NULL;
    if(*first == NULL) { 
        *first = *last = n;
    } else {
        (*last) -> ptr = n;
        *last = n;
    }
}

void insertion(int val, int p) {
    if(p < v.size()) {
        insertPLL(val, &(v[p] -> first), &(v[p] -> last));
        return;
    } else if (v.size() == 0 && p == 0){
        addresses* a = new addresses;
        v.push_back(a);
        insertPLL(val, &(v[0] -> first), &(v[0] -> last));
    }
    else {
        for(int i = v.size() - 1; i <= p; i++) {
            addresses* a = new addresses;
            v.push_back(a);
        }
        insertPLL(val, &(v[p] -> first), &(v[p] -> last));
        return;
    }  
}

void printLL(node* first) {
    node* temp = first;
    while (temp != NULL) {
        cout << temp -> val << " ";
        temp = temp -> ptr;
    }
    cout << endl;
}

void print() {
    for(int i = 0; i < v.size(); i++) {
        printLL(v[i] -> first);
    }
}

int main() {
    insertion(0, 0);
    insertion(1, 0);
    insertion(0, 1);
    insertion(1, 1);
    insertion(2, 1);
    insertion(0, 2);
    insertion(1, 2);
    insertion(2, 2);
    insertion(3, 2);
    insertion(5, 5);
    insertion(5, 3);
    insertion(4, 2);
    print();
}