// stock10.h -- Stock class interface
// version 10
#ifndef STOCK10_H_
#define STOCK10_H_

#include <string>
using namespace std;

class Stock
{
private:
    string company;
    long shares;
    double share_val;
    double total_val;
    void set_total(){
        total_val = shares *share_val;
    }
public:
    Stock();//default constructor
    Stock(const string & co, long n = 0, double pr = 0.0);
    ~Stock();//noisy destructor
    // void acquire(const string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};


#endif // !STOCK00