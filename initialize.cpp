#include <iostream>
using namespace std;

int main(void){
    int i = 0;
    int j (1);
    int k= {2};
    int l{3};
    cout << "style1, i=" << i << endl;
    cout << "style2, j=" << j << endl;
    cout << "style3, k=" << k << endl;
    cout << "style4, l=" << l << endl;

    return 0;
}