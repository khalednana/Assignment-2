//
//  Customer.cpp
//  123
//
//  Created by Khaled  Nana  on 09/10/2022.
//

#include "Customer.hpp"

    void Customer::SetMechanicID(int mechanicid)
    {
        MechanicID=mechanicid;
    };
    int Customer::GetMechanicID()
    {
        return MechanicID;
    };
    void Customer::setAppointment(int hour, int minute)
    {
        Appointment.hour=hour;
        Appointment.minute=minute;
    };
    int Customer::Gethour()
    {
        return Appointment.hour;
    };
    int Customer::Getminute()
    {
        return Appointment.minute;
    };
    void Customer::isEqual(Mechanic P[10])
    {
        for (int i=0; i<=10; i++) {
        if (Appointment.Gethour()!=P[i].getMechanicHour(i) && Appointment.Getminute()!=P[i].getMechanicMinute(i))
        {
            cout<<P[i].GetName()<<" should be assigned to "<<Name<<" at "<<Appointment.Gethour()<<":"<<Appointment.Getminute()<<endl;
            P[i].setApp(i, Appointment.Gethour(), Appointment.Getminute());
            i+=1;
            return;
        }
        else if (Appointment.Gethour()!=P[i+1].getMechanicHour(i) && Appointment.Getminute()!=P[i+1].getMechanicMinute(i))
            {
                cout<<P[i+1].GetName()<<" should be assigned to "<<Name<<" at "<<Appointment.Gethour()<<":"<<Appointment.Getminute()<<endl;
                P[i+1].setApp(i, Appointment.Gethour(), Appointment.Getminute());
                i+=1;
                return;
            }
        else if (Appointment.Gethour()!=P[i+2].getMechanicHour(i) && Appointment.Getminute()!=P[i+2].getMechanicMinute(i))
            {
                cout<<P[i+2].GetName()<<" should be assigned to "<<Name<<" at "<<Appointment.Gethour()<<":"<<Appointment.Getminute()<<endl;
                P[i+2].setApp(i, Appointment.Gethour(), Appointment.Getminute());
                i+=1;
                return;
            }
        else if (Appointment.Gethour()!=P[i+2].getMechanicHour(i) && Appointment.Getminute()!=P[i+2].getMechanicMinute(i))
            {
                cout<<P[i+3].GetName()<<" should be assigned to "<<Name<<" at "<<Appointment.Gethour()<<":"<<Appointment.Getminute()<<endl;
                P[i+3].setApp(i, Appointment.Gethour(), Appointment.Getminute());
                i+=1;
                return;
            }
            else
                cout<<"no mechanics Available \n";
        }
        
    };
