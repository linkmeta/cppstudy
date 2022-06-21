#include <iostream>

using namespace std;

struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main(void){
    inflatable * ps = new inflatable;

    cout << "enter the name:" << endl;
    cin.get(ps->name, 20);
    cout << "enter the volume:" << endl;
    cin >> ps->volume;
    cout << "enter the price:" << endl;
    cin >> ps->price;

    cout << "name: " << ps->name << endl;
    cout << "volume: " << ps->volume << endl;
    cout << "price: " << ps->price << endl;
    delete ps;
    return 0;
}