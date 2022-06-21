#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    double area;
    double side;
    cout << "Enter the floor area: ";
    cin >> area;
    side = sqrt(area);
    cout << "sqrt of " << area << " is " << side << endl;
    return 0;

}