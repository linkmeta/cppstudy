#include <iostream>
#include <vector>
#include <array>


using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    //C style
    double a1[4] = {1.1, 1.2, 1.3, 1.4};

    //C++98 STL
    vector<double> a2(4); //Create vector with 4 elements.
    a2[0] = 2.1;
    a2[1] = 2.2;
    a2[2] = 2.3;
    a2[3] = 2.4;

    //C++11
    array<double, 4> a3 = {3.1, 3.2, 3.2, 3.4};
    array<double, 4> a4;

    a4 = a3;
    cout << "a1[3]:" << a1[3] << " @ " << &a1[3] << endl;
    cout << "a2[3]:" << a2[3] << " @ " << &a2[3] << endl;
    cout << "a3[3]:" << a3[3] << " @ " << &a3[3] << endl;
    cout << "a4[3]:" << a4[3] << " @ " << &a4[3] << endl;
    // cout << "test" << endl;

    return 0;
}

