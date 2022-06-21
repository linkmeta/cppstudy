#include <iostream>
#include "namespace.h"

using namespace std;
namespace pers{
    void getPerson(Person & rp){
        cout << "\nenter first name:";
        cin >> rp.fname;
        cout << "\nenter last name:";
        cin >> rp.lname;
    }
    void showPerson(const Person & rp){
        cout << rp.lname << ", " << rp.fname;
    }
}

namespace debts{
    void getDebt(Debt & rd){
        getPerson(rd.name);
        cout << "\nenter debt:";
        cin >> rd.amount;
    }
    
    void showDebt(const Debt & rd){
        showPerson(rd.name);
        cout << ": $" << rd.amount << endl;
    }
    double sumDebts(const Debt ar[], int n){
        double total = 0;
        for(int i=0; i<n; i++)
            total += ar[i].amount;
        
        return total;
    }
}