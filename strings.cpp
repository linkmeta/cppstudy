#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    const int size = 30;
    char str1[size] = "You are the king of life!";
    char str2[size];

    cout << "Please enter your name:" << endl;
    cin >> str2;
    cout << str2 << ", len is " << strlen(str2) << ", size is " << sizeof(str2) << endl;
    cout << str1 << endl;

    return 0;

}