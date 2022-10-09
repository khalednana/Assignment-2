//
//  Customer.hpp
//  123
//
//  Created by Khaled  Nana  on 09/10/2022.
//

#ifndef Customer_hpp
#define Customer_hpp
#include "Person.hpp"
#include "Mechanic.hpp"
#include <stdio.h>
class Customer : public Person
{
private:
    int MechanicID;
    Time Appointment;
    
    
public:
    void SetMechanicID(int mechanicid);
    int GetMechanicID();
    void setAppointment(int hour, int minute);
    int Gethour();
    int Getminute();
    void isEqual(Mechanic P[10]);
};


#endif /* Customer_hpp */
