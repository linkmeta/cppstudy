#include <iostream>
#include <string>
#include "stock10.h"

using namespace std;

int main(){
    
    cout << "Using default constructor\n";
    Stock Musk;
    Musk.show();

    Stock stock1("Twitter", 200, 159.9);
    stock1.show();

    stock1.buy(100, 160.0);
    stock1.show();

    return 0;
}