#include <iostream>

using namespace std;

void countdown(int n);
int main(void) {

    countdown(4);
    return 0;
}

void countdown(int n){
    cout << "counting down... " << n << " (at " << &n << ")" << endl;

    if(n > 0)
        countdown(n-1);
    
    cout << n << ": kaboom!"<< " (at " << &n << ")" << endl;

}