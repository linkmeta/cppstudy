#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    const int size = 20;
    char cchar1[size] = "c style string";
    char cchar2[size];
    
    string str1 = "c++ style string";
    string str2;
    string str3;
    // cchar2 = cchar1;
    //test for string class
    str2 = str1;
    cout << "str2:" << str2 << endl;
    str3 = str1 + str2;
    cout << "str3:" << str3 << endl;



    //C Style
    strcpy(cchar2,cchar1);    //copy
    cout << "strcpy cchar2:" << cchar2 << endl;
    strcat(cchar2,cchar1);    //append
    cout << "strcat cchar2:" << cchar2 << endl;
    cout << "strlen cchar2:" << strlen(cchar2) << endl; //obtain length of cchar2

    //C++ Style
    str2 = str1;
    cout << "str2:" << str2 << endl;
    str2 += "=====!";
    cout << "new \"str2\":" << str2 << endl;
    cout << "str2 len:" << str2.size() << endl; //obtain length of str2

    string str;
    char cchar[size];
    cout << "enter \'c\' style str:" << endl;
    cin.getline(cchar,size); //obtain C style cin.
    cout << "enter c++ style str:" << endl;
    // cin >> str;
    getline(cin,str);   //obtain C++ sytle cin.
    // cin.getline(str2);
    cout << cchar1 << ":" << cchar << endl;
    cout << "new str:" << ":" << str << endl;

    //special string initialize
    string str4 = R"(fkdjf"fdfd"\'fd\'''''""""")";  // using "()"
    cout << "special str4: " << str4 << endl; 
    string str5 = R"+*((fdfjkdjkf"""\''\\)+*";    // using "+*+*"
    cout << "special str5: " << str5 << endl;
    return 0;
}
