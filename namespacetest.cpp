#include <iostream>
#include "namespace.h"

// using namespace pers;
// using namespace debts;
using namespace std;
void other(void);
void another(void);

int main(void){
    using namespace debts;
    Debt golf = {{"yang","liu"}, 199.9};
    showDebt(golf);

    other();
    another();

    return 0;

}

void other(void){
    using namespace pers;
    using namespace debts;
    Person dg = {"aaa", "bbb"};
    showPerson(dg);

    Debt zippy[3];
    int i;
    for(i=0; i<3; i++)
        getDebt(zippy[i]);

    for(i=0; i<3; i++)
        showDebt(zippy[i]);   

    cout << "Total debts: $" << sumDebts(zippy, 3) << endl;

}

void another(void){
    using namespace pers;
    Person col = {"ccc", "ddd"};
    showPerson(col);
}
