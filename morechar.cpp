#include <iostream>

using namespace std;

int main(void){
    char ch;
    int i;
    cout << "Please enter a new character:____" << endl;
    cin >> ch;
    i = ch;
    cout << "The character is: " << ch << ", and the value is " << i << endl;

    ch += 1;
    i += 1;
    cout << "After +1, the new character is: " << ch << ", and the value is " << i << endl;

    return 0;
}