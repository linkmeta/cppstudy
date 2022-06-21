#include <iostream>

using namespace std;

int main(void){
    int lbs;
    const int lbs_per_stn = 14;

    cout << "Enter your weight:" << endl;
    cin >> lbs;

    cout << lbs << " pounds = " << lbs/lbs_per_stn
         << " stones, " << lbs%lbs_per_stn << "pound(s)\n";

    return 0;

}