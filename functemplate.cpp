#include <iostream>

using namespace std;

template <typename T> // or class T
void Swap(T &a, T&b);

int main(void){

    int i = 10;
    int j = 20;
    cout << "i=" << i << ", j=" << j << ".\n";
    cout << "using int swapper:\n";
    Swap(i, j);
    cout << "new i=" << i << ", j=" << j << ".\n";

    double x = 24.5;
    double y = 80.5;
    cout << "x=" << x << ", y=" << y << ".\n";
    cout << "using double swapper:\n";
    Swap(x, y);
    cout << "new x=" << x << ", y=" << y << ".\n";

    return 0;
}

template <typename T>
void Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}