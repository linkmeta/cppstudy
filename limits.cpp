#include <iostream>
#include <climits>

using namespace std;

int main(void){
    short n_short = SHRT_MAX;
    int n_int = INT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    int test(12);

    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "int is " << sizeof(n_int) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." <<endl;
    cout << "long long is " << sizeof(n_llong) << " bytes." << endl;

    cout << "short max value is " << n_short << endl;
    cout << "int max value is " << n_int << endl;
    cout << "long max value is " << n_long << endl;
    cout << "long long max value is " << n_llong << endl;

    cout << "short min value is " << SHRT_MIN << endl;
    cout << "int min value is " << INT_MIN << endl;
    cout << "long min value is " << LONG_MIN << endl;
    cout << "long long min value is " << LLONG_MIN << endl;

    cout << "test is " << test << endl;
    return 0;

}