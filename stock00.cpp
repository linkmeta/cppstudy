#include "stock00.h"
#include <iostream>
#include <string>
using namespace std;

void Stock::acquire(const std::string & co, long n, double pr){
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