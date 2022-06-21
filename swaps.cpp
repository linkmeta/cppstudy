#include <iostream>

using namespace std;

void swapr(int & a, int & b); // a,b are aliases for ints
void swapp(int *p, int *q); //p, q are pointers of ints
void swapv(int a, int b); // a,b are new variables

int main(void){
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1=$" << wallet1 << " wallet2=$" << wallet2 << endl;

    cout << "using references to swap contents:\n";
    swapr(wallet1, wallet2);
    cout << "wallet1=$" << wallet1 << " wallet2=$" << wallet2 << endl;

    cout << "using pointers to swap contents:\n";
    swapp(&wallet1, &wallet2);
    cout << "wallet1=$" << wallet1 << " wallet2=$" << wallet2 << endl;

    cout << "using variables to swap contents:\n";
    swapv(wallet1, wallet2);
    cout << "wallet1=$" << wallet1 << " wallet2=$" << wallet2 << endl;

    return 0;
}

void swapr(int & a, int & b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}