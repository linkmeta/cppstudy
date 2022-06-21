#include <iostream>

using namespace std;

struct reg{
    unsigned int high:4;
    unsigned int low:4;
    bool sta;
    bool flag;
};

int main(void){
    reg cnss = {5,10,true,false};
    cout << "cnss:\n" << cnss.high << endl;
    cout << cnss.low << endl << cnss.sta << endl << cnss.flag;
 
    return 0; 
}