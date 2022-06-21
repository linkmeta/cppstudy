#include <iostream>
#include <fstream> // for file I/O

using namespace std;

const float discount = 0.95;
int main(void){
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile; //create object for output
    outFile.open("carinfo.txt"); //associate with a file

    cout << "enter the model of automobile:";
    cin.getline(automobile,50);
    cout << "enter the model year:";
    cin >> year;
    cout << "enter the price:";
    cin >> a_price;

    d_price = discount * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "model:" << automobile << endl;
    cout << "year:" << year << endl;
    cout << "orginal price:" << a_price << endl;
    cout << "new price:" << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);

    outFile << "model:" << automobile << endl;
    outFile << "year:" << year << endl;
    outFile << "orginal price:" << a_price << endl;
    outFile << "new price:" << d_price << endl;    

    outFile.close(); // done with file

    return 0;
}