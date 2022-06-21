#include <iostream>

using namespace std;

int main(void){
    int year;
    char address[50];

    cout << "Please enter your year" << endl;

    //style 1
    // cin >> year;
    // cin.get();

    //style 2
    (cin >> year).get();

    cout << "enter your address:" << endl;
    cin.getline(address,50);

    cout << "Year: " << year << "\nAddress: " << address << endl;
    return 0;
}