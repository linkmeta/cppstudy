#include <iostream>

using namespace std;

char * buildstr(char ch, int times);
int main(void){
    int times;
    char ch;
    cout << "enter a char:";
    cin >> ch;
    cout << "enter repeat times:";
    cin >> times;
    char *ps;

    ps = buildstr(ch, times);
    cout << ps << endl;
    delete []ps;

    return 0;
}

char * buildstr(char ch, int times){
    char * pstr = new char[times +1];
    pstr[times] = '\0';
    while (times-- > 0){
        pstr[times] = ch;
    }
    return pstr;
}