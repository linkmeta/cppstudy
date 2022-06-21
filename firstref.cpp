#include <iostream>

using namespace std;

int main(void){
    int rats = 101;
    int & rodents = rats; // rodents is a reference

    cout << "rats = " << rats << "( at " << &rats << " )\n";
    cout << "rodents = " << rodents << "( at " << &rodents << " )\n";

    rodents++;
    cout << "rats = " << rats << "( at " << &rats << " )\n";
    cout << "rodents = " << rodents << "( at " << &rodents << " )\n";   
    return 0;
}