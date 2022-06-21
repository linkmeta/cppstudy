#include <iostream>

using namespace std;
int stonetolb(int sts);
int main(void){
    int stone;
    cout << "Enter the weight: ";
    cin >> stone;
    int lb = stonetolb(stone);
    cout << stone << " stones = " << lb << " pounds." <<endl;
    return 0;
}
int stonetolb(int sts){
    return sts*14;
}