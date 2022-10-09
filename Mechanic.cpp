//
//  Mechanic.cpp
//  123
//
//  Created by Khaled  Nana  on 09/10/2022.
//

#include "Mechanic.hpp"

    void Mechanic::addCount()
    {
        count+=1;
    };
    int Mechanic::getCount()
    {
        return count;
    };
    int Mechanic::getMechanicHour(int i)
    {
        return appointment[i].hour;
    };
    int Mechanic::getMechanicMinute(int i)
    {
        return appointment[i].minute;
    };
    void Mechanic::setApp(int mechanicNumber,int hour, int minute)
    {
        appointment[mechanicNumber].hour=hour;
        appointment[mechanicNumber].minute=minute;
    };
    bool Mechanic::isAvailable(int mechanicNumber,int hour, int minute)
    {
        if(appointment[mechanicNumber].hour==hour && appointment[mechanicNumber].minute==minute)
        {
            return false;
            
        }
        else
            return true;
  
    };
