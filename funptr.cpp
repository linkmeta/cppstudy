#include <iostream>

using namespace std;

double besty(int);
double pam(int);

void estimate(int lines, double (*func)(int));
int main(void){
    int code;
    cout << "how many lines of code do you need? ";
    cin >> code;
    cout << "besty's estimate:\n";
    estimate(code, besty);

    cout << "pam's estimate:\n";
    estimate(code, pam);
    return 0;
}

double besty(int lines){
    return 0.05*lines;
}

double pam(int lines){
    return 0.04*lines;
}

void estimate(int lines, double (*func)(int)){
    cout << lines << " lines will take ";
    cout << func(lines) << " hours,\n";
    cout << (*func)(lines) << " hours\n";
}
