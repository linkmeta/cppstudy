#include <iostream>
#include <ctime> // describes clock() function, clock_t type

using namespace std;

typedef float FLOAT; //typedef

int main(void){
    FLOAT secs;
    cout << "enter the delay time:";
    cin >> secs;

    clock_t delay = secs*CLOCKS_PER_SEC;
    cout << "starting." << endl;
    clock_t start = clock();
    while ( clock()-start < delay);
    cout << "end..." << endl;

    return 0;
}