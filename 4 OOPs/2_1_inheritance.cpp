#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void printAge(){
        cout << this->age << endl;
    }

    void printWeight(){
        cout << this->weight << endl;
    }
};

class Dog1:public Animal{
    // Animal ki chije yaha bhi use kar sakte h 
    // aur main me bhi
    public:
    void getAge(){
        cout << this->age << endl;
    }
};

class Dog2:protected Animal{
    // Animal ki chije yaha bhi use kar sakte h 
    // but main me nhi
    public:
    void getAge(){
        cout << this->age << endl;
    }
    void setAge(int age){
        this->age = age ;
    }
};

class Dog3:private Animal{
    // Animal ki chije yaha bhi use nhi kar sakte h 
    // aur main me bhi nhi
    public:
    void getAge(){
        cout << this->age << endl;
    }
    void setAge(int age){
        this->age = age ;
    }
};

int main(){
    Dog1 d1;
    d1.age = 5;
    d1.weight = 40;
    d1.printAge();
    d1.printWeight();
    d1.getAge();

    Dog2 d2;
    // d2.age = 5;
    // d2.weight = 40;
    // d2.printAge();
    // d2.printWeight();
    d2.setAge(2);
    d2.getAge();


    Dog3 d3;
    // d3.age = 5;
    // d3.weight = 40;
    // d3.printAge();
    // d3.printWeight();
    d3.setAge(3);
    d3.getAge();

    
    return 0; 
}