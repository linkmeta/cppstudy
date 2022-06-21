#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 50;
int main(void){
    char filename[SIZE];

    ifstream inFile; //object for handling file input
 
    cout << "enter the filename:";
    cin.getline(filename, SIZE);
    inFile.open(filename); // associate with a file

    if (!inFile.is_open()){
        cout << "open file " << filename << "failed \n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int cnt = 0;
    inFile >> value; //get first value
    while (inFile.good()){
        ++cnt;
        sum += value;
        inFile >> value; // get next value
    }
    if (inFile.eof())
        cout << "reach the end of file.\n";
    else if (inFile.fail())
        cout << "input terminated by data mismatch.\n";
    else
        cout << "unknown fail reason.\n";

    cout << "read items:" << cnt << endl;
    cout << "sum:" << sum << endl;
    cout << "average:" << sum/cnt << endl;

    inFile.close(); //finished with the file.
    return 0;
}