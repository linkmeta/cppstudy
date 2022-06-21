#include <iostream>
#include <cmath>

using namespace std;

struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

polar rect_to_polar(rect r);
rect polar_to_rect(polar p);

void show_polar(polar p);
void show_rect(rect r);

int main(void){
    polar p_pos;
    rect r_pos;
    
    cout << "enter the x and y pos:";
    while( cin >> r_pos.x >> r_pos.y){
        p_pos = rect_to_polar(r_pos);
        show_polar(p_pos);
        cout << "the next two numbers:";
    }
    cout << "Done.\n";
    return 0;
}

polar rect_to_polar(rect r){
    polar temp;
    temp.distance = sqrt(r.x*r.x + r.y*r.y);
    temp.angle = atan2(r.y, r.x);
    return temp;
}

void show_polar(polar p){

    cout << "distance = " << p.distance << " , angle = " << p.angle << endl;
}