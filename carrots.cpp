#include <iostream>
using namespace std;
int main(void){
    int carrots=25;
    std::cout << "I have ";
    std::cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots -= 1;
    cout << "Crunch..crunch... Now I have " << carrots << " carrots." << endl;
    // cout << endl;
    return 0;

}