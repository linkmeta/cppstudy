#include <iostream>
#include <climits>
using namespace std;
#define ZERO 0

int main(void){
    int m = INT_MAX;
    unsigned int n = m;

    cout << "m is " << m << ", and n is " << n << endl;
    m += 1;
    n += 1;
    cout << "After +1, m is " << m << ", and n is " << n << endl;

    m = ZERO;
    n = ZERO;

    cout << "m is " << m << ", and n is " << n << endl;
    m -= 1;
    n -= 1;
    cout << "After -1, m is " << m << ", and n is " << n << endl;

    return 0;
}

