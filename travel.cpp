#include <iostream>

using namespace std;

struct travel_time{
    int hour;
    int minute;
};
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

const int MINS_PER_HOUR = 60;
int main(void){
    travel_time day1 = {5, 45}; // 5 hours, 45 minutes.
    travel_time day2 = {4, 55}; // 4 hours, 55 minutes.

    travel_time trip = sum(day1, day2);
    show_time(trip);
    return 0;
}

travel_time sum(travel_time t1, travel_time t2){
    travel_time total;
    total.minute = (t1.minute + t2.minute) % MINS_PER_HOUR;
    total.hour = t1.hour + t2.hour + (t1.minute + t2.minute) / MINS_PER_HOUR;

    return total;
}

void show_time(travel_time t){
    cout << "total:\n" << t.hour << " hours, " << t.minute << " minutes" << endl;
}