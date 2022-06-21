#include <iostream>
#include <string>
using namespace std;

int main(void){
    string word;
    double prices[5] = {1.1,1.2,1.3,1.4,1.5};
    for (double x:prices)
        cout << x << endl;
    cout << "enter a word:" << endl;
    cin >> word;

    for (int i= word.size()-1; i>=0; i--)
        cout << word[i];
    cout << "\nend\n";
    return 1;
}