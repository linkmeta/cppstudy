#include <iostream>
#include <cstring>

using namespace std;

struct toy
{
    char name[20];
    float price;
    double weigth;
    string mark;
} boy_toy, girl_toy;

enum TYPE{
    TYPE_0,
    TYPE_1,
    TYPE_2
};
struct uniontest
{
    char name[20];
    float price;
    // TYPE type;
    union{
        int barcodenum;
        char barcodestr[20];
    };
};

int main(void){
    struct toy car = { // C style initialize;
        "police car",
        19.99,
        1.99,
        "test fdfd"
    };
    toy chess = {  // C++ style initialize;
        "military chess",
        39.99,
        9.9,
        "fdfdfd"
    };
    toy duck {"yellow dark",1,0.9}; // C++ style initialize;

    chess.mark = "best military chess in the world!";
    cout << car.name << "\n\tprice:" << car.price << "\n\tweigth:" << car.weigth << "\n\tmark:" << car.mark << endl;
    cout << chess.name << "\n\tprice:" << chess.price << "\n\tweigth:" << chess.weigth << "\n\tmark:" << chess.mark << endl;

    cout << duck.name << "\n\tprice:" << duck.price << "\n\tweigth:" << duck.weigth << "\n\tmark:" << duck.mark << endl;
    cout << "please input duck's mark:\n";
    getline(cin,duck.mark);
    cout << "duck' mark is : " << duck.mark << endl;

    toy new_duck;
    new_duck = duck;
    cout << "copy to " << new_duck.name << "\n\tprice:" << new_duck.price << "\n\tweigth:" << new_duck.weigth << "\n\tmark:" << new_duck.mark << endl;

    boy_toy = chess;
    cout << "boy_toy: " << boy_toy.name << "\n\tprice:" << boy_toy.price << "\n\tweigth:" << boy_toy.weigth << "\n\tmark:" << boy_toy.mark << endl;

    girl_toy = car;
    cout << "girl_toy: " << girl_toy.name << "\n\tprice:" << girl_toy.price << "\n\tweigth:" << girl_toy.weigth << "\n\tmark:" << girl_toy.mark << endl;

    toy child[2] = {{"Mike",1,1,"no.1"},{"Lily",2,2,"no.2"}};
    cout << child[0].name << "\n\tprice:" << child[0].price << "\n\tweigth:" << child[0].weigth << "\n\tmark:" << child[0].mark << endl;
    cout << child[1].name << "\n\tprice:" << child[1].price << "\n\tweigth:" << child[1].weigth << "\n\tmark:" << child[1].mark << endl;

    uniontest product;
    cout << "adjust the product's price to :" << endl;
    (cin >> product.price).get();
    if (product.price < 10.0) {
        cout << "please enter the code num:" << endl;
        cin >> product.barcodenum;
        cout << product.barcodenum << endl;

    } else{
        cout << "please enter the code string:" << endl;
        cin.getline(product.barcodestr,20);
        cout << product.barcodestr << endl;        
    }

    cout << "set the product's type to :" << endl;
    int type;
    (cin >> type).get();
    switch(type){
        case TYPE_0:
        cout << "Type 0" << endl;
        break;
        case TYPE_1:
        cout << "Type 1" << endl;
        break;
        case TYPE_2:
        cout << "Type 2" << endl;
        break;
        default:
        cout << "invalid type" << endl;
        break;      
    }

    return 0;
}