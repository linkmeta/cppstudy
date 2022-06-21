#include <iostream>

using namespace std;

int main(void){
    float f_num = 10.0/3.0;
    double d_num = 10.0/3.0;
    const float fnum = 1.23f;
    const double dnum = 4.56L;
    cout << "float number is " << f_num << endl;
    cout << "double number is " << d_num << endl;
    cout << f_num*d_num << endl;
    cout << "const float :" << fnum << endl;
    cout << "const double :" << dnum << endl;
    return 0;

}