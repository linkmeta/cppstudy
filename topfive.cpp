#include <iostream>
#include <cstring>

using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main(void){
    string list[SIZE];
    cout << "enter your " << SIZE << " sports:\n";
    for(int i=0; i<SIZE; i++){
        getline(cin, list[i]);
    }
    cout << "display your list:\n";
    display(list, SIZE);
    return 0;
}

void display(const string sa[], int n){
    for(int i=0; i<n; i++)
        cout << i+1 << ": " << sa[i] << endl;
}