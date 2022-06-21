#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and " << bird << endl;

    cout << "enter a new animal:";
    cin >> animal;
    ps = animal;

    cout << "ps is " << ps << endl;
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps,animal);
    cout << "strcpy animal:" << animal << " to ps=" << ps << endl;
    cout << "animal at:" << (int *) animal << endl;
    cout << "ps at:" << (int *) ps << endl;
    delete []ps;
    return 0;
}