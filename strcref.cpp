#include <iostream>
#include <string>

using namespace std;

struct free_throws{
    string name;
    int made;
    int attempts;
    float percent;
};

void show(const free_throws & ft);
void setpercent(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main(void){
    free_throws one = {"one", 13, 14};
    free_throws two = {"two", 10, 16};
    free_throws three = {"three", 7, 9};
    free_throws four = {"four", 5, 9};
    free_throws team = {"team", 0, 0};

    free_throws dup;

    setpercent(one);
    show(one);
    accumulate(team, one);
    show(team);

    //use return value as argument
    show(accumulate(team, two));
    dup = accumulate(accumulate(team,three), four);
    show(team);
    show(dup);
    return 0;
}

void show(const free_throws & ft){
    cout << "name: " << ft.name << endl;
    cout << "\tmade: " << ft.made << "\tattempts: " << ft.attempts << "\tpercent: " << ft.percent << endl;
}

void setpercent(free_throws & ft){
    if(ft.attempts != 0)
        ft.percent = (float)100*ft.made/ft.attempts;
    else
        ft.percent = 0;
}

free_throws & accumulate(free_throws & target, const free_throws & source){
    target.attempts += source.attempts;
    target.made += source.made;
    setpercent(target);
    return target;
}