#include <iostream>

using namespace std;
unsigned int c_in_str(const char * str, char ch);

int main(void){
    char mmm[15] = "minimum";
    char *wail = "ululate";

    unsigned int ms = c_in_str(mmm,'m');
    unsigned int us = c_in_str(wail,'u');
    cout << ms << " m chars in " << mmm << endl;
    cout << us << " u chars in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char * str, char ch){
    unsigned int cnt = 0;
     while(*str){
         if(*str == ch)
            cnt++;
        str++;
     }
    return cnt;
}