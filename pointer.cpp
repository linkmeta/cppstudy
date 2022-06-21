#include <iostream>
using namespace std;

int main(void){
    int val = 2022;
    int *p;
    p = &val;

    //express value two ways.
    cout << "val=" << val;
    cout << " *p=" << *p << endl;

    //express address two ways.
    cout << "&val=" << &val;
    cout << " p=" << p << endl;

    *p += 1;
    cout << "*p new value:" << val << endl;

    int* p2 = new int; // using new method
    double * p3 = new double;
    *p2 = 2022;
    *p3 = 19.99;

    cout << "p2= " << p2 << " *p2=" << *p2 << endl;
    cout << "p3= " << p3 << " *p3=" << *p3 << endl;
    
    delete p2;
    delete p3;

    cout << "p2= " << p2 << endl;
    cout << "p3= " << p3 << endl;

    double* p4 = new double[5];  // new pointer array
    p4[0] = 0.1;
    p4[1] = 0.2;
    p4[2] = 0.3;

    cout << p4[0] << endl;
    cout << p4[1] << endl;
    cout << p4[2] << endl;

    delete [] p4; //delete pointer array
    return 0;

}