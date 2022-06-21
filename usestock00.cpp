#include <iostream>
#include <string>
#include "stock00.h"

using namespace std;

int main(){
    Stock Musk;
    Musk.acquire("Twitter", 200, 159.9);
    Musk.show();

    Musk.buy(100, 160.0);
    Musk.show();

    Musk.sell(100, 160.0);
    Musk.show();

    Musk.update( 161.0);
    Musk.show();

    return 0;
}