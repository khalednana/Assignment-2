//
//  Mechanic.hpp
//  123
//
//  Created by Khaled  Nana  on 09/10/2022.
//

#ifndef Mechanic_hpp
#define Mechanic_hpp
#include "Person.hpp"
#include <iostream>
#include <string>
#include <queue>
#define array 20
using namespace std;
#include <stdio.h>

struct Time {
    int hour;
    int minute;
    void SetMinute(int j)
    {
        minute=j;
    };
    void SetHour(int jj)
    {
        hour=jj;
    };
    int Gethour()
    {
        return hour;
    };
    int Getminute()
    {
        return minute;
    };
};


class Mechanic : public Person
{
private:
    int counter;
    Time appointment[array];
    int count=0;
public:
    void addCount();
    int getCount();
    int getMechanicHour(int i);
    int getMechanicMinute(int i);
    void setApp(int mechanicNumber,int hour, int minute);
    bool isAvailable(int mechanicNumber,int hour, int minute);
};

#endif /* Mechanic_hpp */
