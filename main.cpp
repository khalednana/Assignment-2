#include "Person.hpp"
#include "Mechanic.hpp"
#include "Customer.hpp"
#include <iostream>
#include <string>
#include <queue>
#define array 20
using namespace std;
int main() {
    Customer c[10];
    Mechanic m[10];

    for (int i=0;i<=10; i++) {
        cout<<"Enter mechanic "<<i+1<< " Name: ";
        string name;
        cin>>name;
        if (name=="done") {
            break;
        }
        m[i].SetName(name);
        cout<<"Enter done when you're done\n";

    }

    for (int i=0;i<=10; i++) {
        cout<<"Customer "<<i+1<<" name: ";

        string name;
        cin>>name;
        if(name=="done")
        {
            break;
        }
        c[i].SetName(name);
        cout<<"Enter Appointment: hour: ";
        int hour;
        cin>>hour;
        cout<<"Enter Appointment: minute: ";
        int minute;
        cin>>minute;
        c[i].setAppointment(hour, minute);
        cout<<"Enter done when you're done\n";
    }
    c[0].isEqual(m);
    c[1].isEqual(m);
    c[2].isEqual(m);
    c[3].isEqual(m);
    c[4].isEqual(m);
};
