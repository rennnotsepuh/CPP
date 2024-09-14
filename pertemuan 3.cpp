#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 2;
    bool hasil1, hasil2;
    
    //jika perbandingannya sama
    hasil1 = (a == b);
    // jika tidak sama
    hasil2 = (a != b);
    
    cout << hasil1 << endl;
    cout << hasil2 << endl;
    
    if (hasil1) {
    cout << "hasil satu adalah true" << endl;
    } else {
    cout << "hasil satu adalah false" << endl;
    }
    
    if (hasil2) {
    cout << "hasil dua adalah true" << endl;
    } else {
    cout << "hasil dua adalah false" << endl;
    }
}