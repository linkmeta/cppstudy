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

void rect_to_polar(rect *r, polar *p);

void show_polar(polar *p);


int main(void){
    polar p_pos;
    rect r_pos;
    
    cout << "enter the x and y pos:";
    while( cin >> r_pos.x >> r_pos.y){
        rect_to_polar(&r_pos, &p_pos);
        show_polar(&p_pos);
        cout << "the next two numbers:";
    }
    cout << "Done.\n";
    return 0;
}

void rect_to_polar(rect *r, polar *p){
    p->distance = sqrt(r->x*r->x + r->y*r->y);
    p->angle = atan2(r->y, r->x);

}

void show_polar(polar *p){

    cout << "distance = " << p->distance << " , angle = " << p->angle << endl;
}