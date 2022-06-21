#include <iostream>

using namespace std;

int main(void){
    int ants;
    int bats,cooks;

    int array[] = {1,2,3,4,5,6};
    int list[8] = {}; //array initialize style;
    int list2[8]{};

    cout << "list[6]=" << list[6] << endl;
    cout << "list2[6]=" << list2[6] << endl;
    cout << "size of array = " << sizeof array << endl;
    cout << "num of array = " << sizeof(array)/sizeof(int) << endl;


    auto i = 1;
    auto j = true;
    auto f = 1.1;

    cout << "sizeof(" << i << ")=" << sizeof(i) << endl;
    cout << "sizeof(" << j << ")=" << sizeof(j) << endl;
    cout << "sizeof(" << f << ")=" << sizeof(f) << endl;
    ants = 19.99 + 11.99;
    cout << "ants=" << ants << endl;
    
    bats = (int)19.99 + (int)11.99;  // old C syntax.
    cooks = int(19.99) + int(11.99);  // new C++ syntax.
    cout << "bats=" << bats << endl;
    cout << "cooks=" << cooks << endl;

    char ch;
    cout << "please enter the character:" << endl;
    cin >> ch;
    cout << "The value of character " << ch;
    cout << " is " << int(ch) << endl;
    cout << "Yes, it's " << static_cast<int>(ch) << endl; // using static_cast
    return 0;

}