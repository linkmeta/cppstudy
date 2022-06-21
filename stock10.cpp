#include "stock10.h"
#include <iostream>

using namespace std;

Stock::Stock(){
    cout << "Default constructor called" << endl;
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const string & co, long n, double pr){
    cout << "Constructor using " << co << " called\n";
    company = co;
    if (n < 0){
        cout << "Num of shares cann't be negative;" << endl;
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_total();
}
Stock::~Stock(){
    cout << "Bye..." << company << endl;
}
void Stock::buy(long num, double price){
    if (num < 0){
        cout << "Transaction is aborted." << endl;
    } else {
        shares += num;
        share_val = price;
        set_total();
    }
}

void Stock::sell(long num, double price){
    if (num < 0){
        cout << "Transaction is aborted." << endl; 
    } else{
        shares -= num;
        share_val = price;
        set_total();
    }
}

void Stock::update(double price){
    share_val = price;
    set_total();
}

void Stock::show(){
    cout << "Company: " << company
    << " Shares: " << shares << endl
    << " Share Price: $" << share_val
    << " Total Worth: $" << total_val << endl;
}