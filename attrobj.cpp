#include <iostream>
#include <string>
#include <array>

const int seasons = 4;
const std::array<std::string, seasons> snames =
    {"spring", "summer", "fall", "winter"};

void fill(std::array<double, seasons> * pa);
void show(std::array<double, seasons> da);

int main(void){
    std::array<double, seasons> expense;
    fill(&expense);
    show(expense);
    return 0;
}

void fill(std::array<double, seasons> *pa){
    using namespace std;
    for (int i=0; i< seasons; i++){
        cout << "enter " << snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }

}

void show(std::array<double, seasons> da){
    using namespace std;
    double total = 0;
    cout << "\n===EXPENSES===\n";
    for(int i=0; i<seasons; i++){
        cout << snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total = $" << total << endl;
}