#include <iostream>

using namespace std;

int main(void){
    const int strsize = 20;
    char name[strsize];
    char food[strsize];

    cout << "Enter your name:" << endl;
    cin.getline(name,strsize); //read whole line.
    cout << "Enter your favrite food:" << endl;
    cin.getline(food,strsize);
    cout << "I'm " << name << ", and I like " << food << endl;
    return 0;
}