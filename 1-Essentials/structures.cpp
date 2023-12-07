#include <iostream>
using namespace std;

// definition is not consuming any memory unless you create an object
// you can declare them with adding r1, r2, r3 after the closing curly brace
struct Rectangle
{
    int length;
    int breadth;
    char x;
};

// you can also declare them here, but you have to remove the r1, r2, r3

int main()
{
    // initialization of a structure
    struct Rectangle r1 = {10, 5};
    // integer takes 4 bytes and char takes 1 byte
    // but machine will allocate 4 bytes for char too, because its allocating 4 bytes for integers, but will only use 1 byte
    // making its accesibility easier, its called as padding
    cout<<sizeof(r1)<<endl;
    
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    return 0;
}