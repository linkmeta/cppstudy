#include <iostream>
#include <cctype>
using namespace std;

int main(void){
    int digits = 0;
    int chars = 0;
    int spaces = 0;
    int puncts = 0;
    int others = 0;
    char ch;
    cout << "enter the string for analysis:\n";
    cin.get(ch);
    while (ch != '#'){
        if(isdigit(ch))
            digits ++;
        else if(isalpha(ch))
            chars ++;
        else if(isspace(ch))
            spaces ++;
        else if(ispunct(ch))
            puncts ++;
        else
            others ++;
        cin.get(ch);
    }
    cout << "digits:" << digits << endl;
    cout << "chars:" << chars << endl;
    cout << "spaces:" << spaces << endl;
    cout << "puncts:" << puncts << endl;
    cout << "others:" << others << endl;
    return 0;
}